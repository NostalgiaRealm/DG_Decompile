/*
 * FUN_180184678 at 180184678
 * undefined FUN_180184678(void)
 * Address ranges: 180184678-18018472b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180184678(undefined8 param_1,longlong param_2,uint param_3,byte param_4)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_2 + (ulonglong)param_3 * 4;
  if (*(int *)(lVar1 + 0xec) == 0) {
    if (*(char *)(param_2 + 0x1cb) == '\0') {
      *(uint *)(lVar1 + 0xec) = *(uint *)(param_2 + 0x158) | 0x410100;
      *(char *)(param_2 + (ulonglong)*(uint *)(param_2 + 0x158) + 0x146) = (char)param_3;
      *(int *)(param_2 + 0x158) = *(int *)(param_2 + 0x158) + 1;
    }
    else {
      *(uint *)(lVar1 + 0xec) = *(byte *)(param_2 + (ulonglong)param_3 + 0x146) | 0x410100;
    }
  }
  if (*(char *)(param_2 + 0x1cc) == '\0') {
    uVar2 = param_3;
    if (param_3 == 0x10) {
      uVar2 = 1;
    }
    switch((uint)(*(ulonglong *)(*(longlong *)(param_2 + 0x1b0) + 0x48) >>
                 (((ulonglong)uVar2 & 0xf) << 2)) & 0xf) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      goto switchD_180184700_caseD_0;
    case 5:
    case 6:
      param_2 = param_2 + (ulonglong)param_3;
      param_4 = *(byte *)(param_2 + 0x134) | 1;
      break;
    default:
      goto switchD_180184700_default;
    }
  }
  else {
switchD_180184700_caseD_0:
    param_2 = param_2 + (ulonglong)param_3;
    param_4 = *(byte *)(param_2 + 0x134) | param_4;
  }
  *(byte *)(param_2 + 0x134) = param_4;
switchD_180184700_default:
  return *(undefined4 *)(lVar1 + 0xec);
}

