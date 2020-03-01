require 'nokogiri'
require 'open-uri'

parsed = Nokogiri::HTML(open('https://www.google.com/search?client=ubuntu&channel=fs&q=linux&ie=utf-8&oe=utf-8'))

count = 0
parsed.search('a div').each do |link|
  if link.content.include? "http"
    puts link.content
    count+=1
  end
  if count == 10
    break
  end
end
