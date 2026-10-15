/*
 * FUN_10045a78 at 10045a78
 * undefined FUN_10045a78(void)
 * Address ranges: 10045a78-10045bcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10045a78(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_60 [32];
  
  if ((uint)((*(int *)(param_1 + *(int *)(param_1 + 0x124) * 0x14 + 0x6c) -
             *(int *)(param_1 + *(int *)(param_1 + 0x124) * 0x14 + 0x68)) +
            *(int *)(param_1 + 0x118)) <= param_2 + 0xcU) {
    (*(code *)PTR_FUN_100a00c0)(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x124) * 0x14 + 0x74));
    uVar1 = *(int *)(param_1 + 0x124) + 1U & 7;
    iVar2 = param_1 + uVar1 * 0x14;
    iVar3 = (*(code *)PTR_FUN_100a0100)(*(undefined4 *)(iVar2 + 0x74),100);
    if (iVar3 != 0) {
      do {
        (*(code *)PTR_FUN_100a01c0)(auStack_60,0,0,0,0x400000);
        if (*(char *)(param_1 + 300) == '\0') {
          return 0;
        }
        iVar3 = (*(code *)PTR_FUN_100a0100)(*(undefined4 *)(iVar2 + 0x74),100);
      } while (iVar3 != 0);
    }
    **(undefined4 **)(iVar2 + 0x6c) = 0;
    *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(iVar2 + 0x6c);
    *(uint *)(param_1 + 0x124) = uVar1;
  }
  return *(undefined4 *)(param_1 + *(int *)(param_1 + 0x124) * 0x14 + 0x68);
}

