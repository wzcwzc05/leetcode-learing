package note

func UniqueOccurrences(arr []int) bool {
	a := map[int]int{}
	for _, i := range arr {
		a[i]++
	}
	hash := map[int]int{}
	for _, i := range a {
		if hash[i] >= 1 {
			return false
		} else {
			hash[i]++
		}
	}
	return true
}
