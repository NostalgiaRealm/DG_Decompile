/*
 * FUN_10020d85 at 10020d85
 * bool __fastcall FUN_10020d85(int param_1)
 * Address ranges: 10020d85-10020e33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10020d85(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  int local_14;
  uint local_10;
  uint local_c [2];
  
  FUN_1003d280((void *)(*(int *)(*(int *)(*(int *)(param_1 + 0x138) + 0x3188) + 0x1304) + 4),'\0');
  iVar1 = *(int *)(param_1 + 0x138);
  local_14 = 0;
  local_10 = 0xffffffff;
  local_c[0] = 0xffffffff;
  uVar2 = FUN_10027d82((void *)(param_1 + 0x380),*(undefined4 *)(iVar1 + 0xa0),
                       *(undefined4 *)(iVar1 + 0xa4),*(int *)(param_1 + 0x28),
                       (uint)*(byte *)(*(int *)(iVar1 + 4) + 0x54),&local_14,local_c,&local_10);
  bVar3 = (char)uVar2 != '\0';
  if (bVar3) {
    FUN_10027f97(param_1 + 0x380);
    *(int *)(param_1 + 0x44c) = local_14;
    *(uint *)(param_1 + 0x454) = local_10;
    *(uint *)(param_1 + 0x450) = local_c[0];
  }
  return bVar3;
}

