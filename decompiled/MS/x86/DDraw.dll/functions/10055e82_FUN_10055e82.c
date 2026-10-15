/*
 * FUN_10055e82 at 10055e82
 * undefined __stdcall FUN_10055e82(int * param_1)
 * Address ranges: 10055e82-10055fd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10055e82(int *param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uStack_1c;
  uint local_14;
  uint local_10;
  
  uVar4 = 1;
  uVar5 = uVar4;
  if (param_1[9] != 0) {
    uVar5 = param_1[9];
  }
  local_10 = 2;
  uVar7 = 1;
  switch(param_1[8]) {
  case 1:
  case 2:
  case 3:
  case 4:
    uVar7 = 0x10;
    break;
  case 5:
  case 6:
  case 7:
  case 8:
    uVar7 = 0xc;
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
    uVar7 = 8;
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
    uVar7 = 4;
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
    uVar7 = 2;
  }
  iVar2 = *param_1;
  if (iVar2 == 1) {
    uVar6 = CONCAT44(param_1[5] * uVar7 +
                     (int)((ulonglong)(uint)param_1[4] * (ulonglong)uVar7 >> 0x20),
                     (int)((ulonglong)(uint)param_1[4] * (ulonglong)uVar7));
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        lVar3 = ((ulonglong)uVar7 * (ulonglong)uVar5 & 0xffffffff) * (ulonglong)(uint)param_1[6];
        uVar6 = __allmul((uint)lVar3,
                         (int)((ulonglong)uVar7 * (ulonglong)uVar5 >> 0x20) * param_1[6] +
                         (int)((ulonglong)lVar3 >> 0x20),param_1[4],param_1[5]);
        local_10 = 4;
      }
      else if (iVar2 == 4) {
        uVar6 = __allmul((uint)((ulonglong)uVar7 * (ulonglong)uVar5),
                         (int)((ulonglong)uVar7 * (ulonglong)uVar5 >> 0x20),
                         (uint)*(ushort *)(param_1 + 7),0);
        lVar3 = (uVar6 & 0xffffffff) * (ulonglong)(uint)param_1[6];
        uVar6 = __allmul((uint)lVar3,
                         (int)(uVar6 >> 0x20) * param_1[6] + (int)((ulonglong)lVar3 >> 0x20),
                         param_1[4],param_1[5]);
        local_10 = 8;
      }
      else {
        uVar6 = 0;
      }
      goto LAB_10055f8f;
    }
    uVar6 = __allmul((uint)((ulonglong)uVar7 * (ulonglong)uVar5),
                     (int)((ulonglong)uVar7 * (ulonglong)uVar5 >> 0x20),param_1[4],param_1[5]);
  }
  local_10 = 2;
LAB_10055f8f:
  local_14 = (uint)uVar6;
  uVar1 = *(ushort *)((int)param_1 + 0x1e);
  if (1 < uVar1) {
    do {
      uStack_1c = (uint)(uVar6 >> 0x20);
      uVar6 = __aulldiv(local_14,uStack_1c,local_10,0);
      local_14 = (uint)uVar6;
      uVar6 = uVar6 & 0xffffffff00000000;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}

