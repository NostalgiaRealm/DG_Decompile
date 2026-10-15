/*
 * FUN_10043b10 at 10043b10
 * undefined FUN_10043b10(void)
 * Address ranges: 10043b10-10043bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10043b10(int param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0;
  iVar2 = *(int *)(param_1 + 0x138);
  FUN_10067c00(*(undefined4 *)(iVar2 + 0x3180),*(undefined4 *)(iVar2 + 0x3184),2,&local_18,0);
  iVar2 = *(int *)(param_1 + 0x138);
  local_20 = 0;
  local_1c = 0;
  uVar3 = FUN_10049780(param_1 + 0x344,*(undefined4 *)(iVar2 + 0xa0),*(undefined4 *)(iVar2 + 0xa4),
                       *(undefined4 *)(param_1 + 0x28),*(undefined1 *)(*(int *)(iVar2 + 4) + 0x54),
                       &local_20,&local_1c);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    FUN_100498d8(param_1 + 0x344);
    *(undefined4 *)(param_1 + 0x438) = local_20;
    *(undefined4 *)(param_1 + 0x43c) = local_1c;
  }
  return bVar1;
}

