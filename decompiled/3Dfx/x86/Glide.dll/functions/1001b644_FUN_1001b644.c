/*
 * FUN_1001b644 at 1001b644
 * bool __thiscall FUN_1001b644(void * this, undefined4 param_1)
 * Address ranges: 1001b644-1001b74a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1001b644(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  undefined1 local_50 [76];
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)(iVar1 + 4);
  iVar3 = FUN_10036a91((int *)(iVar1 + 4));
  FUN_1001b547(local_50,param_1,*(undefined4 *)(iVar1 + 0x2960),*(undefined4 *)(iVar1 + 0x94),
               *(undefined4 *)(iVar1 + 0xa0),*(undefined4 *)(iVar1 + 0xa4),
               *(undefined4 *)(iVar1 + 0xa8),*(undefined4 *)(iVar1 + 0xac),
               *(undefined4 *)(iVar1 + 0xb4),*(undefined4 *)(iVar1 + 0xb8),
               *(undefined4 *)(&DAT_10051de4 + *(int *)(iVar2 + 0x1c) * 4),
               (uint)*(byte *)(iVar2 + 0x26),*(undefined4 *)(&DAT_10051aa0 + iVar3 * 4),
               *(undefined4 *)(&DAT_10051dd0 + *(int *)(iVar2 + 0xce) * 4),
               *(uint *)(iVar2 + 0xc2) >> 2 & 1,*(byte *)(iVar2 + 0x26),*(int *)(iVar2 + 0x18) == 1,
               extraout_ECX,*(undefined4 *)(iVar2 + 0xda),*(undefined4 *)(iVar2 + 0xde));
  piVar4 = FUN_10043ce0(*(void **)(*(int *)((int)this + 4) + 0x295c),extraout_ECX_00);
  *(int **)((int)this + 8) = piVar4;
  if (piVar4 != (int *)0x0) {
    FUN_1001b769((int)this);
    iVar1 = *(int *)((int)this + 4);
    FUN_1004489c(*(void **)(iVar1 + 0x295c),*(int *)((int)this + 8),
                 (int *)(((*(char *)(*(int *)(iVar1 + 4) + 0x50) != '\0') - 1 & 0xc00) + 0x1158 +
                        iVar1),(undefined4 *)(iVar1 + 0x2958));
    *(undefined1 *)(*(int *)((int)this + 8) + 0xd5a) = 0;
  }
  return piVar4 != (int *)0x0;
}

