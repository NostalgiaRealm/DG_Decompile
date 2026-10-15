/*
 * FUN_10074d68 at 10074d68
 * undefined FUN_10074d68(void)
 * Address ranges: 10074d68-10074e3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10074d68(int param_1)

{
  *(undefined1 *)(param_1 + 0x7644) = 0;
  if ((((((*(uint *)(param_1 + 0x6e80) & 0x70000) != 0) ||
        ((*(uint *)(param_1 + 0x6e88) & 0xff) != 0)) ||
       ((*(uint *)(param_1 + 0x6e90) & 0x70000) != 0)) ||
      ((((*(uint *)(param_1 + 0x6e98) & 0xff) != 0 || ((*(uint *)(param_1 + 0x6ea0) & 0x70000) != 0)
        ) || (((*(uint *)(param_1 + 0x6ea8) & 0xff) != 0 ||
              (((*(uint *)(param_1 + 0x6eb0) & 0x70000) != 0 ||
               ((*(uint *)(param_1 + 0x6eb8) & 0xff) != 0)))))))) ||
     (((*(uint *)(param_1 + 0x6ec0) & 0x70000) != 0 ||
      ((((((*(uint *)(param_1 + 0x6ec8) & 0xff) != 0 ||
          ((*(uint *)(param_1 + 0x6ed0) & 0x70000) != 0)) ||
         ((*(uint *)(param_1 + 0x6ed8) & 0xff) != 0)) ||
        (((*(uint *)(param_1 + 0x6ee0) & 0x70000) != 0 ||
         ((*(uint *)(param_1 + 0x6ee8) & 0xff) != 0)))) ||
       (((*(uint *)(param_1 + 0x6ef0) & 0x70000) != 0 || ((*(uint *)(param_1 + 0x6ef8) & 0xff) != 0)
        ))))))) {
    *(undefined1 *)(param_1 + 0x7644) = 1;
  }
  return;
}

