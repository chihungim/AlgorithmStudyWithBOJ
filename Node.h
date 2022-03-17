#pragma once

class Node{
	Node from;
	int me;
	public Node(Node _from, Node _me) {
		from = _from;
		me = _me;
	}
}