package main

import (
        "fmt"
	"github.com/dghubble/go-twitter/twitter"
	"github.com/dghubble/oauth1"
        "flag"
        "os"
)
func main(){
         tweetby := flag.String("tweeterhandle","BhattacharDeb","handle of user")
         flag.Parse()
         config := oauth1.NewConfig("consumerKey", "consumerSecret")
         token := oauth1.NewToken("accessToken", "accessSecret")

         httpClient := config.Client(oauth1.NoContext, token)
         client := twitter.NewClient(httpClient)
         f,err := os.Create("twitterhandles.txt")

         params := &twitter.FollowerListParams{
             ScreenName: *tweetby,
         }
         followers, resp, err := client.Followers.List(params)

         var count int = 0;
         fmt.Println(resp, err)
         for _, follower := range followers.Users {
	 count++
	 f.WriteString("\n" + follower.ScreenName)
         }
	
	 f.WriteString(fmt.Sprintf("\nNumber of followers: %d\n", count))
         f.Close()
         }
