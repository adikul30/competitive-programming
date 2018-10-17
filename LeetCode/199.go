//199. Binary Tree Right Side View

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */


func rightSideView(root *TreeNode) []int {
    var outslice []int
    var nodes []*TreeNode
    if(root!=nil){nodes=append(nodes,root)}
    for len(nodes)!=0{
        outslice=append(outslice,nodes[0].Val)
        var newnodes []*TreeNode
        for _,node:=range nodes{
            if(node.Right!=nil){
                newnodes=append(newnodes,node.Right)
            }
            if(node.Left!=nil){
                newnodes=append(newnodes,node.Left)
            }
        }
        nodes=newnodes
    }
    return outslice
}
