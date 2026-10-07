# Activity 5: Collaborative Coding with GitLens and Live Share

**Course:** Portfolio Building (B25CS0311) — 3rd Semester B.Tech CSE, REVA University  
**Student:** Ashwin Rajesh Sam (SRN: R25EJ019)  
**Pair Partner:** Rohan Sharma (GitHub: `@rohan-codes-cse`)  

---

## 1. Project Overview
This repository records the hands-on execution of Activity 5, focusing on real-time remote collaborative pair programming and commit archaeology. We utilized **Microsoft Live Share** to establish a shared editing and debugging session, and **GitLens** to inspect fine-grained code authorship, line-by-line blame, and commit graph histories.

---

## 2. Collaboration Log
- **Pairing Partner:** Rohan Sharma (`@rohan-codes-cse`)
- **Session Duration:** 45 minutes active paired session
- **What Was Built Together:**
  - Implemented the modular `greet(const char *name)` function inside `hello.c`.
  - Swapped roles between Driver (Guest) and Navigator (Host) using Live Share's "Follow Participants" feature.
  - Jointly executed and tested the compiled binary in the shared integrated terminal.
- **Key Learnings on Tools:**
  - **GitLens:** Gained deep visibility into commit history and inline blame annotations directly beside code lines, making it effortless to see when and why each line was changed.
  - **Live Share:** Experienced real-time co-authoring where both developers see concurrent cursors, shared terminal instances, and unified server ports without needing manual merge conflict resolutions.

---

## 3. Reflection Questions & Answers

### Q1: How did GitLens' blame view help you understand who changed what, and when, in code you did not write yourself?
> **Answer:** GitLens blame annotations seamlessly append subtle metadata at the end of each code line, displaying the author, commit age, and commit subject message. When navigating through `hello.c`, hovering over any line instantly revealed the commit context and parent diff. This eliminated ambiguity regarding why a function signature was refactored or who introduced a specific logic flow, allowing instant attribution without having to run manual `git blame` or `git log` CLI searches.

### Q2: What was one advantage and one limitation of pair programming through Live Share compared to sitting next to your partner?
> **Answer:**
> - **Advantage:** Live Share enables independent workspace navigation while maintaining a shared session. Both engineers can retain their personal themes, keybindings, and editor settings while simultaneously editing different sections of the file or running shared terminal commands.
> - **Limitation:** It lacks spontaneous visual cues, peripheral body language, and non-verbal reactions that happen when sitting side-by-side. Additionally, temporary network latency can cause slight lag in cursor positioning or terminal echoing.

### Q3: Why might employers value seeing evidence of collaborative commits in a portfolio repository?
> **Answer:** Modern professional software engineering is fundamentally a team sport. Employers look for signals that an engineer can communicate clearly, co-author modular code, write meaningful commit messages, adhere to shared coding standards, and navigate peer reviews without friction. Demonstrating collaborative commits proves that the candidate is already comfortable working within distributed workflows.

---

## 4. How to Compile and Run
```bash
gcc -Wall -Wextra -std=c11 hello.c -o hello
./hello
```
