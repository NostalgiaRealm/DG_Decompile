/*
 * FUN_180032d04 at 180032d04
 * uint __fastcall FUN_180032d04(longlong * param_1, undefined4 param_2, undefined1 param_3, longlong * param_4, undefined4 * param_5, char param_6)
 * Address ranges: 180032d04-180032e0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180032d04(longlong *param_1,undefined4 param_2,undefined1 param_3,longlong *param_4,
                  undefined4 *param_5,char param_6)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar4;
  undefined8 local_18;
  uint local_10;
  int local_c;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if ((*(byte *)(param_1 + 9) & 0x20) == 0) {
    uVar3 = 0;
    cVar2 = (**(code **)(*(longlong *)param_1[0xe] + 0x28))
                      ((longlong *)param_1[0xe],*(undefined4 *)((longlong)param_1 + 0x94),
                       (int)param_1[0x13]);
    if (cVar2 != '\0') {
      local_10 = (uint)*(ushort *)(param_1 + 2);
      local_18 = 0;
      if ((int)param_1[4] != 0) {
        bVar1 = *(byte *)((longlong)param_1 + 0x24);
        local_10 = ((*(ushort *)(param_1 + 2) - 1) + (uint)bVar1 & -(uint)bVar1) / (uint)bVar1;
      }
      local_c = *(ushort *)((longlong)param_1 + 0x16) - 1;
      cVar2 = (**(code **)(*(longlong *)param_1[0xe] + 0x70))
                        ((longlong *)param_1[0xe],*(undefined4 *)((longlong)param_1 + 0x94),
                         (int)param_1[0x13],param_1[0x1c],CONCAT44(uVar4,(int)param_1[0x1d]),
                         &local_18);
      *(char *)((longlong)param_1 + 0xee) = cVar2;
      uVar3 = ~-(uint)(cVar2 != '\0') & 2;
      (**(code **)(*(longlong *)param_1[0xe] + 0x30))
                ((longlong *)param_1[0xe],*(undefined4 *)((longlong)param_1 + 0x94),
                 (int)param_1[0x13],0);
    }
    *param_4 = 0;
    *param_5 = 0;
  }
  else {
    uVar3 = FUN_180032a94(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar3;
}

