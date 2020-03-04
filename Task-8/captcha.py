from PIL import Image
import pytesseract
ph = Image.open("captcha.png")
captxt = pytesseract.image_to_string(ph)
print(captxt)
result=eval(captxt)
print 'equals to',result
