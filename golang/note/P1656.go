package note

type OrderedStream struct {
	stream []string
	ptr    int
}

func Constructor(n int) OrderedStream {
	return OrderedStream{make([]string, n+1), 1}
}

func (s *OrderedStream) Insert(idKey int, value string) []string {
	s.stream[idKey] = value
	begin := s.ptr
	for s.ptr <= len(s.stream)-1 && s.stream[s.ptr] != "" {
		s.ptr++
	}
	return s.stream[begin:s.ptr]
}

/**
 * Your OrderedStream object will be instantiated and called as such:
 * obj := Constructor(n);
 * param_1 := obj.Insert(idKey,value);
 */
