/*
 * FUN_1001c34b at 1001c34b
 * bool __fastcall FUN_1001c34b(int * param_1)
 * Address ranges: 1001c34b-1001c45a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1001c34b(int *param_1)

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
  iVar3 = FUN_10036a91((int *)(iVar1 + 4));
  FUN_1001b547(local_4c,param_1,*(undefined4 *)(iVar1 + 0x2960),*(undefined4 *)(iVar1 + 0x94),
               *(undefined4 *)(iVar1 + 0xa0),*(undefined4 *)(iVar1 + 0xa4),
               *(undefined4 *)(iVar1 + 0xa8),*(undefined4 *)(iVar1 + 0xac),
               *(undefined4 *)(iVar1 + 0xb4),*(undefined4 *)(iVar1 + 0xb8),
               *(undefined4 *)(&DAT_10051de4 + *(int *)(iVar2 + 0x1c) * 4),
               (uint)*(byte *)(iVar2 + 0x26),*(undefined4 *)(&DAT_10051aa0 + iVar3 * 4),
               *(undefined4 *)(&DAT_10051dd0 + *(int *)(iVar2 + 0xce) * 4),
               *(uint *)(iVar2 + 0xc2) >> 2 & 1,*(byte *)(iVar2 + 0x26),*(int *)(iVar2 + 0x18) == 1,
               extraout_ECX,*(undefined4 *)(iVar2 + 0xda),*(undefined4 *)(iVar2 + 0xde));
  piVar4 = FUN_10043ce0(*(void **)(param_1[1] + 0x295c),extraout_ECX_00);
  FUN_1001b74b(param_1,0);
  FUN_1001b769((int)param_1);
  iVar1 = param_1[1];
  FUN_1004489c(*(void **)(iVar1 + 0x295c),param_1[2],
               (int *)(((*(char *)(*(int *)(iVar1 + 4) + 0x50) != '\0') - 1 & 0xc00) + 0x1158 +
                      iVar1),(undefined4 *)(iVar1 + 0x2958));
  if (piVar4 != (int *)0x0) {
    param_1[2] = (int)piVar4;
    (**(code **)(*param_1 + 0x18))();
  }
  return piVar4 != (int *)0x0;
}

