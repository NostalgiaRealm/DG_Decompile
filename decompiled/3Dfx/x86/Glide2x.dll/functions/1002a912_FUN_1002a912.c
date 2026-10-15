/*
 * FUN_1002a912 at 1002a912
 * bool __fastcall FUN_1002a912(int param_1)
 * Address ranges: 1002a912-1002a9a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1002a912(int param_1)

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
  FUN_10041a1a(*(void **)(*(int *)(param_1 + 0x138) + 0x3180),
               *(int *)(*(int *)(param_1 + 0x138) + 0x3184),2,(int)&local_14,0);
  iVar1 = *(int *)(param_1 + 0x138);
  local_8 = 0;
  local_c = 0;
  uVar2 = FUN_1002d5a2((void *)(param_1 + 0x344),*(undefined4 *)(iVar1 + 0xa0),
                       *(undefined4 *)(iVar1 + 0xa4),*(undefined4 *)(param_1 + 0x28),
                       *(byte *)(*(int *)(iVar1 + 4) + 0x54),&local_8,&local_c);
  bVar3 = (char)uVar2 != '\0';
  if (bVar3) {
    FUN_1002d675(param_1 + 0x344);
    *(undefined4 *)(param_1 + 0x438) = local_8;
    *(undefined4 *)(param_1 + 0x43c) = local_c;
  }
  return bVar3;
}

