如果单项线性链式物理结构中每个节点可以找到其他多个节点就成了树

可以把树里的节点分层，不同层之间符合线性规律（可以用一条有方向的线把所有层串起来）

树的最上面一层只有一个节点，这个节点叫作树的根节点。

根节点可以代表整个树

如果两个节点间有直接的联系就表示他们之间存在父子关系
	其中靠近根节点的叫父节点，另一个叫子节点
任何节点最多只有一个父节点（根节点没有腹父节点）

如果任何节点最多只能有两个子节点则这种树叫作二杈树
	用左右区分二杈树里一个节点的两个子节点
	二杈树里的任何一个节点都可以代表一个二杈树
一个节点的左子节点代表的树叫作子节点的左子树，右子节点代表的树叫作子节点的右子树。

由一个树状链式物理结构和一组相关的管理函数构成的数据结构叫作树

树的遍历指按顺序依次处理树里的每个节点
	树的大多数操作都是通过遍历实现的
	树的遍历通常采用递归的方式实现
	遍历树的时候一般先遍历左子树再遍历右子树
根据根节点处理时机的不同分为：前序遍历、中序遍历、后序遍历
	前序遍历：最先处理根节点
	中序遍历：两子树之间处理根节点
	后序遍历：最后处理根节点

	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        