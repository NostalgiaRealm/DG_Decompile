/*
 * FUN_180032e10 at 180032e10
 * ulonglong __fastcall FUN_180032e10(longlong * param_1)
 * Address ranges: 180032e10-180032ebc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180032e10(longlong *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 local_18;
  uint local_10;
  int local_c;
  
  if (((*(byte *)(param_1 + 9) & 0x20) == 0) && (*(char *)((longlong)param_1 + 0xed) != '\0')) {
    local_10 = (uint)*(ushort *)(param_1 + 2);
    local_18 = 0;
    if ((int)param_1[4] != 0) {
      bVar1 = *(byte *)((longlong)param_1 + 0x24);
      local_10 = ((*(ushort *)(param_1 + 2) - 1) + (uint)bVar1 & -(uint)bVar1) / (uint)bVar1;
    }
    local_c = *(ushort *)((longlong)param_1 + 0x16) - 1;
    uVar2 = (**(code **)(*(longlong *)param_1[0xe] + 0x78))
                      ((longlong *)param_1[0xe],*(undefined4 *)((longlong)param_1 + 0x94),
                       (int)param_1[0x13],param_1[0x1c],(int)param_1[0x1d],&local_18);
    *(bool *)((longlong)param_1 + 0xed) = (char)uVar2 == '\0';
    return CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)uVar2 != '\0');
  }
  uVar3 = FUN_180031d4c(param_1,(char)param_1[0xc]);
  return uVar3;
}

