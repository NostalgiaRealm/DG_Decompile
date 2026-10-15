/*
 * FUN_1801bad48 at 1801bad48
 * undefined FUN_1801bad48(void)
 * Address ranges: 1801bad48-1801bae9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801bad48(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0x3e0000003c;
  param_1[1] = 0x3e00000000;
  switch(param_2) {
  case 0:
  case 7:
  case 8:
    goto switchD_1801bad6c_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
  case 9:
  case 10:
  case 0xb:
    uVar2 = 0x35;
    uVar1 = 0x39;
    goto LAB_1801bad78;
  case 5:
  case 6:
  case 0xc:
  case 0xd:
    uVar2 = 0x27;
    uVar1 = 0x2a;
    goto LAB_1801bad78;
  case 0xe:
    uVar2 = 0x46;
    uVar1 = 0x47;
    goto LAB_1801bad98;
  case 0xf:
  case 0x10:
    uVar2 = 0x49;
    uVar1 = 0x4a;
    goto LAB_1801bad98;
  case 0x11:
  case 0x12:
    uVar2 = 0x4c;
    uVar1 = 0x4d;
    goto LAB_1801bad98;
  case 0x13:
    uVar1 = 0x44;
    goto LAB_1801badbc;
  case 0x14:
    uVar1 = 0x45;
LAB_1801badbc:
    *(undefined4 *)param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    goto LAB_1801bae98;
  case 0x15:
    uVar2 = 0x17;
    uVar1 = 0x18;
    goto LAB_1801bad78;
  case 0x16:
    uVar2 = 9;
    uVar1 = 0xb;
    goto LAB_1801bad78;
  case 0x17:
    uVar1 = 0x38;
    break;
  case 0x18:
    uVar2 = 0x21;
    uVar1 = 0x23;
    goto LAB_1801bad78;
  case 0x19:
    uVar2 = 0x21;
    uVar1 = 0x25;
LAB_1801bad78:
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
    *(undefined4 *)param_1 = uVar2;
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    return;
  case 0x1a:
    uVar1 = 0x36;
    break;
  case 0x1b:
    uVar1 = 0x22;
    break;
  case 0x1c:
    uVar1 = 10;
    break;
  case 0x1d:
    uVar1 = 0x29;
    break;
  case 0x1e:
    uVar1 = 0x10;
    break;
  case 0x1f:
    uVar1 = 2;
    break;
  case 0x20:
    uVar2 = 0x4f;
    uVar1 = 0x50;
    goto LAB_1801bad98;
  case 0x21:
    uVar2 = 0x52;
    uVar1 = 0x53;
LAB_1801bad98:
    *(undefined4 *)param_1 = uVar2;
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
LAB_1801bae98:
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  case 0x22:
  case 0x27:
    uVar3 = 0x35;
    uVar2 = 0x37;
    uVar1 = 0x38;
    goto LAB_1801bae60;
  case 0x24:
  case 0x25:
  case 0x28:
  case 0x29:
    *(undefined4 *)(param_1 + 1) = 0x2f;
  case 0x23:
    uVar3 = 0x2c;
    uVar2 = 0x2d;
    uVar1 = 0x2e;
    goto LAB_1801bae60;
  case 0x26:
    uVar3 = 0x27;
    uVar2 = 0x28;
    uVar1 = 0x29;
LAB_1801bae60:
    *(undefined4 *)param_1 = uVar3;
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 2) = uVar2;
    return;
  default:
    *param_1 = 0;
    goto LAB_1801bae98;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
switchD_1801bad6c_caseD_0:
  return;
}

