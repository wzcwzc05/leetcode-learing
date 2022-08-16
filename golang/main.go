package main

import (
	"fmt"
	"golang/note"
)

func main() {
	fmt.Println("Hello, World!")

	// 	note.P1656()
	// 	os := note.Constructor(5)
	// 	fmt.Println(os.Insert(3, "ccccc"))
	// 	fmt.Println(os.Insert(1, "aaaaa"))
	// 	fmt.Println(os.Insert(2, "bbbbb"))
	// 	fmt.Println(os.Insert(5, "eeeee"))
	// 	fmt.Println(os.Insert(4, "ddddd"))

	//  note.P1207()
	arr := []int{-3, 0, 1, -3, 1, 1, 1, -3, 10, 0}
	fmt.Println(note.UniqueOccurrences(arr))
}
