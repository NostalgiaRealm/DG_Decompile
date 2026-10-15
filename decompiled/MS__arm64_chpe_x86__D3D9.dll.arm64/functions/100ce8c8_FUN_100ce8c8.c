/*
 * FUN_100ce8c8 at 100ce8c8
 * undefined FUN_100ce8c8(void)
 * Address ranges: 100ce8c8-100cea7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ce8c8(undefined4 param_1)

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
    goto switchD_100ce908_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
  case 9:
  case 10:
  case 0xb:
    *(undefined4 *)in_w8 = 0x35;
    uVar4 = 0x39;
    goto LAB_100ce918;
  case 5:
  case 6:
  case 0xc:
  case 0xd:
    *(undefined4 *)in_w8 = 0x27;
    uVar4 = 0x2a;
    goto LAB_100ce918;
  case 0xe:
    *puVar2 = 0;
    uVar5 = 0x46;
    uVar4 = 0x47;
    goto LAB_100ce940;
  case 0xf:
  case 0x10:
    *puVar2 = 0;
    uVar5 = 0x49;
    uVar4 = 0x4a;
    goto LAB_100ce940;
  case 0x11:
  case 0x12:
    *puVar2 = 0;
    uVar5 = 0x4c;
    uVar4 = 0x4d;
    goto LAB_100ce940;
  case 0x13:
    uVar4 = 0x44;
    goto LAB_100ce970;
  case 0x14:
    uVar4 = 0x45;
LAB_100ce970:
    *(undefined4 *)in_w8 = uVar4;
    goto LAB_100ce974;
  case 0x15:
    *(undefined4 *)in_w8 = 0x17;
    uVar4 = 0x18;
    goto LAB_100ce918;
  case 0x16:
    *(undefined4 *)in_w8 = 9;
    uVar4 = 0xb;
    goto LAB_100ce918;
  case 0x17:
    uVar4 = 0x38;
    break;
  case 0x18:
    *(undefined4 *)in_w8 = 0x21;
    uVar4 = 0x23;
    goto LAB_100ce918;
  case 0x19:
    *(undefined4 *)in_w8 = 0x21;
    uVar4 = 0x25;
    goto LAB_100ce918;
  case 0x1a:
    uVar4 = 0x36;
    break;
  case 0x1b:
    uVar4 = 0x22;
    break;
  case 0x1c:
    uVar4 = 10;
    break;
  case 0x1d:
    uVar4 = 0x29;
    break;
  case 0x1e:
    uVar4 = 0x10;
    break;
  case 0x1f:
    uVar4 = 2;
    break;
  case 0x20:
    *puVar2 = 0;
    uVar5 = 0x4f;
    uVar4 = 0x50;
    goto LAB_100ce940;
  case 0x21:
    *puVar2 = 0;
    uVar5 = 0x52;
    uVar4 = 0x53;
LAB_100ce940:
    *(undefined4 *)in_w8 = uVar5;
    *puVar3 = uVar4;
    return;
  case 0x22:
  case 0x27:
    *(undefined4 *)in_w8 = 0x35;
    *(undefined4 *)puVar1 = 0x37;
    uVar4 = 0x38;
    goto LAB_100ce974;
  case 0x24:
  case 0x25:
  case 0x28:
  case 0x29:
    *(undefined4 *)(in_w8 + 1) = 0x2f;
  case 0x23:
    *(undefined4 *)in_w8 = 0x2c;
    *(undefined4 *)puVar1 = 0x2d;
    uVar4 = 0x2e;
    goto LAB_100ce974;
  case 0x26:
    *(undefined4 *)in_w8 = 0x27;
    *(undefined4 *)puVar1 = 0x28;
    uVar4 = 0x29;
LAB_100ce974:
    *puVar3 = uVar4;
LAB_100cea78:
    *puVar2 = 0;
    return;
  default:
    *(undefined4 *)in_w8 = 0;
    *puVar3 = 0;
    goto LAB_100cea78;
  }
  *(undefined4 *)in_w8 = uVar4;
LAB_100ce918:
  *puVar2 = uVar4;
  *puVar3 = uVar4;
switchD_100ce908_caseD_0:
  return;
}

