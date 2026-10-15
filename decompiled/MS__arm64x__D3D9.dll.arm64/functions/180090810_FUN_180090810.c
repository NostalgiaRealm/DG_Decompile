/*
 * FUN_180090810 at 180090810
 * undefined FUN_180090810(void)
 * Address ranges: 180090810-1800908ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_180090810(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *local_50;
  int local_48;
  undefined8 local_44;
  undefined8 local_3c;
  
  plVar2 = (longlong *)FUN_1800fae80(*(longlong *)((longlong)param_1 + 0xc) + 0x18b8,param_2,0);
  if (plVar2 != (longlong *)0x0) goto LAB_1800908c8;
  piVar3 = (int *)0x0;
  if (param_5 != 0) {
    local_48 = param_5;
    if ((*(uint *)(param_4 + 0x30) & 1) == 0) {
      if ((*(uint *)(param_4 + 0x30) >> 1 & 1) == 0) goto LAB_180090884;
      uVar1 = (ulonglong)local_44 >> 0x20;
      local_44 = CONCAT44((uint)uVar1 & 0xffffff00,0x3f800000);
    }
    else {
      local_3c = 0;
      local_44 = 0;
    }
    piVar3 = &local_48;
  }
LAB_180090884:
  local_50 = (longlong *)0x0;
  plVar2 = *(longlong **)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20 + 0x6d0);
  (**(code **)(*plVar2 + 0xd8))(plVar2,param_2,0,param_4,0,piVar3,&DAT_180235458,&local_50);
  plVar2 = local_50;
  if (local_50 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
LAB_1800908c8:
  (**(code **)(*plVar2 + 8))(plVar2);
  return plVar2;
}

