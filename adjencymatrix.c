#include <stdio.h>

int main() {
    int vertices, edges;
    
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    
    int adjacencyMatrix[vertices][vertices];
    
    // Initialize the adjacency matrix with all zeros
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            adjacencyMatrix[i][j] = 0;
        }
    }
    
    printf("Enter the number of edges: ");
    scanf("%d", &edges);
    
    printf("Enter the edges (format: vertex1 vertex2):\n");
    for (int i = 0; i < edges; i++) {
        int vertex1, vertex2;
        scanf("%d %d", &vertex1, &vertex2);
        
        // Update the adjacency matrix for the edge
        adjacencyMatrix[vertex1][vertex2] = 1;
        adjacencyMatrix[vertex2][vertex1] = 1;
    }
    
    // Print the adjacency matrix
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
