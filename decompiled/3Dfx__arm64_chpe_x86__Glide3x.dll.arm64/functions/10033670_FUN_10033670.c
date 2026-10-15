/*
 * FUN_10033670 at 10033670
 * undefined FUN_10033670(void)
 * Address ranges: 10033670-10033733
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10033670(int param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0;
  iVar2 = *(int *)(param_1 + 0x138);
  FUN_1006b8a0(*(undefined4 *)(iVar2 + 0x3300),*(undefined4 *)(iVar2 + 0x3304),2,&local_18,0);
  iVar2 = *(int *)(param_1 + 0x138);
  local_20 = 0;
  local_1c = 0;
  uVar3 = FUN_10038af8(param_1 + 0x344,*(undefined4 *)(iVar2 + 0xa0),*(undefined4 *)(iVar2 + 0xa4),
                       *(undefined4 *)(param_1 + 0x28),*(undefined1 *)(*(int *)(iVar2 + 4) + 0x54),
                       &local_20,&local_1c);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    FUN_10038c50(param_1 + 0x344);
    *(undefined4 *)(param_1 + 0x438) = local_20;
    *(undefined4 *)(param_1 + 0x43c) = local_1c;
  }
  return bVar1;
}

