package main

import (
        "fmt"
	"github.com/dghubble/go-twitter/twitter"
	"github.com/dghubble/oauth1"
        "flag"
        "os"
)
function main(){

tweetby:=flag.string("tweeterhandle",BhattacharDeb,"handler of user")
flag.Parse()
config := oauth1.NewConfig("WxQPG0QcXsMbhnIChleuSjvhq", "K6qsXuQrSUpIwW0UrgtnMOCi73qCE6XQyoroTExsHhqsoqbJIu")
token := oauth1.NewToken("1248636080800186369-4El0HFkpO1SvpbYT6fu5ovSTQZ7JBW", "UDiwignmneNx2peVTEUZdUYQTRePPOvOuxaaYFq3u0od8")

httpClient := config.Client(oauth1.NoContext, token)
client := twitter.NewClient(httpClient)



params := &twitter.FollowersListParam{
ScreenName: *tweetby,}
followers, resp, err := client.Followers.List(FollowerListParams)
fmt.Println(resp, err)

f,err := os.Create("twitterhandles.txt")}

var count int = 0;
for _, follower := range followers{
	count++
	f.WriteString("\n" + followers.ScreenName)}
	
	f.WriteString(fmt.printf("\n", count))
f.Close()
