/*
 * FUN_10010141 at 10010141
 * bool __fastcall FUN_10010141(int * param_1)
 * Address ranges: 10010141-10010250
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10010141(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  undefined1 local_4c [72];
  
  (**(code **)(*param_1 + 0x14))();
  iVar1 = param_1[1];
  iVar2 = *(int *)(iVar1 + 4);
  iVar3 = FUN_100391e2((int *)(iVar1 + 4));
  FUN_1000f330(local_4c,param_1,*(undefined4 *)(iVar1 + 0x29dc),*(undefined4 *)(iVar1 + 0x94),
               *(undefined4 *)(iVar1 + 0xa0),*(undefined4 *)(iVar1 + 0xa4),
               *(undefined4 *)(iVar1 + 0xa8),*(undefined4 *)(iVar1 + 0xac),
               *(undefined4 *)(iVar1 + 0xb4),*(undefined4 *)(iVar1 + 0xb8),
               *(undefined4 *)(&DAT_10054c64 + *(int *)(iVar2 + 0x1c) * 4),
               (uint)*(byte *)(iVar2 + 0x26),*(undefined4 *)(&DAT_10054834 + iVar3 * 4),
               *(undefined4 *)(&DAT_10054c50 + *(int *)(iVar2 + 0xce) * 4),
               *(uint *)(iVar2 + 0xc2) >> 2 & 1,*(byte *)(iVar2 + 0x26),*(int *)(iVar2 + 0x18) == 1,
               extraout_ECX,*(undefined4 *)(iVar2 + 0xda),*(undefined4 *)(iVar2 + 0xde));
  piVar4 = FUN_10046438(*(void **)(param_1[1] + 0x29d8),extraout_ECX_00);
  FUN_1000f534(param_1,0);
  FUN_1000f552((int)param_1);
  iVar1 = param_1[1];
  FUN_10046ff4(*(void **)(iVar1 + 0x29d8),param_1[2],
               (int *)(((*(char *)(*(int *)(iVar1 + 4) + 0x50) != '\0') - 1 & 0xc00) + 0x11d4 +
                      iVar1),(undefined4 *)(iVar1 + 0x29d4));
  if (piVar4 != (int *)0x0) {
    param_1[2] = (int)piVar4;
    (**(code **)(*param_1 + 0x18))();
  }
  return piVar4 != (int *)0x0;
}

