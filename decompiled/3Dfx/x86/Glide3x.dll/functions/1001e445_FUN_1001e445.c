/*
 * FUN_1001e445 at 1001e445
 * bool __fastcall FUN_1001e445(int param_1)
 * Address ranges: 1001e445-1001e4d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1001e445(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0;
  FUN_10044502(*(void **)(*(int *)(param_1 + 0x138) + 0x3300),
               *(int *)(*(int *)(param_1 + 0x138) + 0x3304),2,(int)&local_14,0);
  iVar1 = *(int *)(param_1 + 0x138);
  local_8 = 0;
  local_c = 0;
  uVar2 = FUN_10020ee5((void *)(param_1 + 0x344),*(undefined4 *)(iVar1 + 0xa0),
                       *(undefined4 *)(iVar1 + 0xa4),*(undefined4 *)(param_1 + 0x28),
                       *(byte *)(*(int *)(iVar1 + 4) + 0x54),&local_8,&local_c);
  bVar3 = (char)uVar2 != '\0';
  if (bVar3) {
    FUN_10020fb8(param_1 + 0x344);
    *(undefined4 *)(param_1 + 0x438) = local_8;
    *(undefined4 *)(param_1 + 0x43c) = local_c;
  }
  return bVar3;
}

