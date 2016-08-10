package main

import (
	"C"
	"fmt"
)

//export say_hello
func say_hello(name string) {
	fmt.Printf("Hi %s!\n", name)
}

//export say_bye
func say_bye() {
	fmt.Println("Bye!")
}

func main() {}
