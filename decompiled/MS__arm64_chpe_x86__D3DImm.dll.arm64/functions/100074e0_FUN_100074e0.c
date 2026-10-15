/*
 * FUN_100074e0 at 100074e0
 * undefined FUN_100074e0(void)
 * Address ranges: 100074e0-1000754f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100074e0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x904) = 0;
    puVar2 = (undefined2 *)(param_1 + 0x908);
    break;
  case 1:
    *(undefined1 *)(param_1 + 0x907) = 0;
    puVar2 = (undefined2 *)(param_1 + 0x905);
    break;
  default:
    goto switchD_100074f8_caseD_2;
  case 10:
    *(undefined1 *)(param_1 + 0x904) = 0;
    *(undefined2 *)(param_1 + 0x906) = 0;
    *(undefined1 *)(param_1 + 0x90a) = 0;
    puVar1 = (undefined1 *)(param_1 + 0x229);
    goto LAB_10007540;
  }
  *puVar2 = 0;
  puVar1 = (undefined1 *)(param_1 + 0x90a);
LAB_10007540:
  *puVar1 = 0;
  *(undefined1 *)(param_1 + 0x90c) = 0;
switchD_100074f8_caseD_2:
  return;
}

