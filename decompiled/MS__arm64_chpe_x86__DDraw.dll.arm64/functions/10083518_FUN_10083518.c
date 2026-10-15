/*
 * FUN_10083518 at 10083518
 * undefined FUN_10083518(void)
 * Address ranges: 10083518-10083673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10083518(undefined8 param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = param_2[9];
  lVar4 = 1;
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  uVar6 = (ulonglong)uVar3;
  switch(param_2[8]) {
  case 1:
  case 2:
  case 3:
  case 4:
    lVar4 = 0x10;
    break;
  case 5:
  case 6:
  case 7:
  case 8:
    lVar4 = 0xc;
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    lVar4 = 8;
    break;
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
    lVar4 = 4;
    break;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x55:
  case 0x56:
  case 0x72:
  case 0x73:
    lVar4 = 2;
    break;
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
    lVar4 = 1;
  }
  switch(*param_2) {
  case 1:
    uVar6 = *(longlong *)(param_2 + 4) * lVar4;
    break;
  case 2:
    uVar6 = *(longlong *)(param_2 + 4) * uVar6 * lVar4;
    break;
  case 3:
    uVar6 = (ulonglong)(uint)param_2[6] * *(longlong *)(param_2 + 4) * uVar6 * lVar4;
    uVar7 = 4;
    goto LAB_1008363c;
  case 4:
    uVar6 = (ulonglong)*(ushort *)(param_2 + 7) * (ulonglong)(uint)param_2[6] *
            *(longlong *)(param_2 + 4) * uVar6 * lVar4;
    uVar7 = 8;
    goto LAB_1008363c;
  default:
    uVar6 = 0;
  }
  uVar7 = 2;
LAB_1008363c:
  uVar3 = 1;
  uVar5 = uVar6;
  if (1 < *(ushort *)((int)param_2 + 0x1e)) {
    do {
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        uVar2 = SoftwareBreakpoint(0xf004,0x1008365c);
        (*(code *)uVar2)();
      }
      uVar1 = 0;
      if (uVar7 != 0) {
        uVar1 = uVar5 / uVar7;
      }
      uVar3 = uVar3 + 1;
      uVar6 = uVar1 + uVar6;
      uVar5 = uVar1;
    } while (uVar3 < *(ushort *)((int)param_2 + 0x1e));
  }
  return uVar6;
}

