sequences = ["ATCG", "GCTA", "TTAA", "CGCG"]

new_sequences = ["AATTGGCC", "CCGGAATT", "GGTTAACC"]
sequences.extend(new_sequences)

for sequence in sequences:
    print(f"Processing: {sequence}")
    print(f"A: {sequence.count('A')}, T: {sequence.count('T')}, C: {sequence.count('C')}, G: {sequence.count('G')}")
