/*
 * FUN_10033b30 at 10033b30
 * undefined FUN_10033b30(void)
 * Address ranges: 10033b30-10033c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10033b30(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *in_w8;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *in_w8 = 0x3e0000003c;
  puVar1 = in_w8 + 2;
  *(undefined4 *)puVar1 = 0;
  in_w8[1] = 0x3e00000000;
  puVar2 = (undefined4 *)((int)in_w8 + 0xc);
  puVar3 = (undefined4 *)((int)in_w8 + 4);
  switch(param_1) {
  case 0:
  case 7:
  case 8:
    goto switchD_10033b70_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
  case 9:
  case 10:
  case 0xb:
    *(undefined4 *)in_w8 = 0x35;
    uVar5 = 0x39;
    goto LAB_10033b80;
  case 5:
  case 6:
  case 0xc:
  case 0xd:
    *(undefined4 *)in_w8 = 0x27;
    uVar5 = 0x2a;
    goto LAB_10033b80;
  case 0xe:
    *puVar2 = 0;
    uVar4 = 0x46;
    uVar5 = 0x47;
    goto LAB_10033ba8;
  case 0xf:
  case 0x10:
    *puVar2 = 0;
    uVar4 = 0x49;
    uVar5 = 0x4a;
    goto LAB_10033ba8;
  case 0x11:
  case 0x12:
    *puVar2 = 0;
    uVar4 = 0x4c;
    uVar5 = 0x4d;
LAB_10033ba8:
    *(undefined4 *)in_w8 = uVar4;
    *puVar3 = uVar5;
    return;
  case 0x13:
    uVar5 = 0x44;
    goto LAB_10033bd8;
  case 0x14:
    uVar5 = 0x45;
LAB_10033bd8:
    *(undefined4 *)in_w8 = uVar5;
    break;
  case 0x15:
    *(undefined4 *)in_w8 = 0x17;
    uVar5 = 0x18;
LAB_10033b80:
    *puVar2 = uVar5;
    *puVar3 = uVar5;
    return;
  default:
    *(undefined4 *)in_w8 = 0;
    *puVar3 = 0;
    goto LAB_10033c54;
  case 0x17:
    *(undefined4 *)in_w8 = 0x35;
    *(undefined4 *)puVar1 = 0x37;
    uVar5 = 0x38;
    break;
  case 0x19:
  case 0x1a:
    *(undefined4 *)(in_w8 + 1) = 0x2f;
  case 0x18:
    *(undefined4 *)in_w8 = 0x2c;
    *(undefined4 *)puVar1 = 0x2d;
    uVar5 = 0x2e;
    break;
  case 0x1b:
    *(undefined4 *)in_w8 = 0x27;
    *(undefined4 *)puVar1 = 0x28;
    uVar5 = 0x29;
  }
  *puVar3 = uVar5;
LAB_10033c54:
  *puVar2 = 0;
switchD_10033b70_caseD_0:
  return;
}

