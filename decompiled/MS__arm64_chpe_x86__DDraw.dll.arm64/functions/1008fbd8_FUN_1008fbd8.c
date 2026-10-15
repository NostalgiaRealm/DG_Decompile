/*
 * FUN_1008fbd8 at 1008fbd8
 * undefined FUN_1008fbd8(void)
 * Address ranges: 1008fbd8-1008fd2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1008fbd8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_60 [32];
  
  if ((uint)((*(int *)(param_1 + *(int *)(param_1 + 0x124) * 0x14 + 0x6c) -
             *(int *)(param_1 + *(int *)(param_1 + 0x124) * 0x14 + 0x68)) +
            *(int *)(param_1 + 0x118)) <= param_2 + 0xcU) {
    (*(code *)PTR_FUN_100ba128)(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x124) * 0x14 + 0x74));
    uVar1 = *(int *)(param_1 + 0x124) + 1U & 7;
    iVar2 = param_1 + uVar1 * 0x14;
    iVar3 = (*(code *)PTR_FUN_100ba168)(*(undefined4 *)(iVar2 + 0x74),100);
    if (iVar3 != 0) {
      do {
        (*(code *)PTR_FUN_100ba270)(auStack_60,0,0,0,0x400000);
        if (*(char *)(param_1 + 300) == '\0') {
          return 0;
        }
        iVar3 = (*(code *)PTR_FUN_100ba168)(*(undefined4 *)(iVar2 + 0x74),100);
      } while (iVar3 != 0);
    }
    **(undefined4 **)(iVar2 + 0x6c) = 0;
    *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(iVar2 + 0x6c);
    *(uint *)(param_1 + 0x124) = uVar1;
  }
  return *(undefined4 *)(param_1 + *(int *)(param_1 + 0x124) * 0x14 + 0x68);
}

