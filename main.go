package main

import "github.com/webview/webview"

func main() {
	w := webview.New(false)
	defer w.Destroy()
	w.SetTitle("Weather Map")
	w.SetSize(820, 200, webview.HintNone)
	w.Move(1000, 36)
	//	w.SetHtml("Thanks for using webview!")
	w.Navigate("https://www.tokyu.co.jp/unten2/unten.html")
	w.Run()
}
