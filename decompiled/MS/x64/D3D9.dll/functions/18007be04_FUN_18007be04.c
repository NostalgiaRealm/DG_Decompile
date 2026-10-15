/*
 * FUN_18007be04 at 18007be04
 * undefined __fastcall FUN_18007be04(undefined8 param_1, uint * param_2, undefined4 param_3, uint param_4, int param_5, longlong param_6, longlong * param_7, char param_8, char param_9)
 * Address ranges: 18007be04-18007c1e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007be04(undefined8 param_1,uint *param_2,undefined4 param_3,uint param_4,int param_5,
                  longlong param_6,longlong *param_7,char param_8,char param_9)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  undefined7 local_53;
  undefined4 uStack_4c;
  
  *(uint *)(param_6 + 0x480) = *param_2 >> 7 & 0x2000;
  puVar2 = (uint *)(param_6 + 800);
  bVar6 = (byte)(*param_2 >> 0x10) & (byte)((uint)param_3 >> 0x10) & 0xf;
  if (*puVar2 != 0) goto LAB_18007c09a;
  uVar7 = *param_2 & 0x7ff;
  uVar5 = (ulonglong)uVar7;
  uVar4 = (*param_2 >> 0x14 & 0x700 | *param_2 & 0x1800) >> 8;
  if (uVar4 == 0) {
    uVar4 = FUN_180085084(0,param_6,uVar7);
  }
  else {
    if (uVar4 != 3) {
      bVar8 = bVar6;
      if (uVar4 == 4) {
        uVar5 = 0;
        if (uVar7 == 0) {
          uVar4 = *(uint *)(param_6 + 0x1fc);
        }
        else if (uVar7 == 1) {
          uVar4 = *(uint *)(param_6 + 0x200);
          bVar8 = 1;
        }
        else {
          if (uVar7 != 2) goto LAB_18007c09a;
          uVar4 = *(uint *)(param_6 + 0x204);
          bVar8 = 2;
        }
      }
      else if (uVar4 == 5) {
        uVar4 = *(uint *)(param_6 + 0x208 + uVar5 * 4);
        uVar5 = 0;
      }
      else {
        if (uVar4 != 6) {
          if (uVar4 != 0x13) goto LAB_18007c09a;
          uVar4 = *(uint *)(param_6 + 0x2c4);
          goto LAB_18007c075;
        }
        if (*(char *)(*(longlong *)(param_6 + 0x10) + 0x4a6c) == '\x03') {
          cVar3 = *(char *)(uVar5 + *(longlong *)(param_6 + 0x18));
          uVar7 = (uint)cVar3;
          uVar5 = (ulonglong)uVar7;
          uVar4 = uVar7;
          if ((-2 < cVar3) && (uVar4 = 0, -1 < cVar3)) {
            uVar4 = uVar7 + 2;
          }
          if (((*param_2 & 0x2000) != 0) && (uVar4 != 0)) {
            uVar5 = (ulonglong)
                    *(uint *)(param_6 + 0x2b4 + (ulonglong)(*(int *)(param_6 + 0x2f0) - 1) * 4);
            if (*(int *)(param_6 + 0x230) == 0) {
              FUN_1800edbe0((uint *)(param_6 + 0x20),param_7,0x36,uVar5);
            }
            else {
              FUN_1800edbe0((uint *)(param_6 + 0x20),param_7,0x1e,uVar5);
            }
            param_2 = param_2 + 1;
            *(byte *)(param_6 + 0x324) = bVar6;
            *puVar2 = *(uint *)(param_6 + 0x27c) | 0x40000000;
            *(undefined4 *)(param_6 + 0x330) = 0xffffffff;
            *(undefined4 *)(param_6 + 0x33c) = 0xffffffff;
            *(undefined4 *)(param_6 + 0x338) = 0xffffffff;
            *(undefined4 *)(param_6 + 0x334) = 0xffffffff;
            *(undefined4 *)(param_6 + 0x340) =
                 *(undefined4 *)(param_6 + 0x2b4 + (ulonglong)(*(int *)(param_6 + 0x2f0) - 1) * 4);
            *(undefined1 *)(param_6 + 0x344) = 3;
            goto LAB_18007c09a;
          }
          uVar4 = *(uint *)(param_6 + 0x280 + (longlong)(int)uVar4 * 4);
        }
        else {
          uVar4 = *(uint *)(param_6 + 0x210 + uVar5 * 4);
          uVar5 = 0;
        }
      }
      FUN_1800850c0(uVar5,param_6,uVar4,bVar8,puVar2);
      goto LAB_18007c09a;
    }
    uVar4 = *(uint *)(param_6 + 0x238);
  }
LAB_18007c075:
  *puVar2 = uVar4;
  *(undefined4 *)(param_6 + 0x334) = 0xffffffff;
  *(undefined4 *)(param_6 + 0x338) = 0xffffffff;
  *(undefined4 *)(param_6 + 0x33c) = 0xffffffff;
  *(undefined4 *)(param_6 + 0x330) = 0xffffffff;
  *(byte *)(param_6 + 0x324) = bVar6;
LAB_18007c09a:
  puVar1 = param_2 + 1;
  uVar4 = *puVar1 >> 0x14 & 0x700 | *puVar1 & 0x1800;
  uVar5 = (ulonglong)(uVar4 >> 8);
  if ((char)(uVar4 >> 8) == '\x13') {
    if (*(int *)(param_6 + 0x484) == -1) {
      uVar5 = param_6 + 0x20;
      *(undefined8 *)(param_6 + 0x350) = *(undefined8 *)puVar2;
      *(undefined8 *)(param_6 + 0x358) = *(undefined8 *)(param_6 + 0x328);
      *(undefined8 *)(param_6 + 0x3a0) = *(undefined8 *)(param_6 + 0x340);
      *(undefined8 *)(param_6 + 0x360) = *(undefined8 *)(param_6 + 0x330);
      *(undefined8 *)(param_6 + 0x368) = *(undefined8 *)(param_6 + 0x338);
      *(undefined8 *)(param_6 + 0x370) = *(undefined8 *)(param_6 + 0x340);
      *(undefined8 *)(param_6 + 0x378) = *(undefined8 *)(param_6 + 0x348);
      *(undefined8 *)(param_6 + 0x380) = *(undefined8 *)puVar2;
      *(undefined8 *)(param_6 + 0x388) = *(undefined8 *)(param_6 + 0x328);
      *(undefined8 *)(param_6 + 0x390) = *(undefined8 *)(param_6 + 0x330);
      *(undefined8 *)(param_6 + 0x398) = *(undefined8 *)(param_6 + 0x338);
      uVar4 = FUN_1800ec8c0(uVar5,4,'\x01');
      *puVar2 = uVar4;
      *(ulonglong *)(param_6 + 0x325) = CONCAT17((undefined1)uStack_4c,local_53);
      *(undefined4 *)(param_6 + 0x32c) = uStack_4c;
      *(byte *)(param_6 + 0x324) = bVar6;
      *(undefined4 *)(param_6 + 0x330) = 0xffffffff;
      *(undefined4 *)(param_6 + 0x334) = 0xffffffff;
      *(undefined4 *)(param_6 + 0x338) = 0xffffffff;
      *(undefined4 *)(param_6 + 0x33c) = 0xffffffff;
      *(undefined8 *)(param_6 + 0x3b0) = *(undefined8 *)puVar2;
      *(undefined8 *)(param_6 + 0x3b8) = *(undefined8 *)(param_6 + 0x328);
      *(undefined8 *)(param_6 + 0x3c0) = *(undefined8 *)(param_6 + 0x330);
      *(undefined8 *)(param_6 + 0x3c8) = *(undefined8 *)(param_6 + 0x338);
    }
    else {
      *(byte *)(param_6 + 0x354) = *(byte *)(param_6 + 0x354) | bVar6;
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),0xe4);
    *(uint *)(param_6 + 0x484) = *puVar1;
    bVar6 = FUN_1800ee208(0xe4,*(byte *)(param_6 + 0x354));
    *(byte *)(param_6 + 0x3b4) = bVar6;
    *(byte *)(param_6 + 900) = bVar6;
    param_2 = puVar1;
  }
  FUN_18007c1e8(uVar5,param_2 + 1,param_4,param_5,param_6,param_8,param_9);
  return;
}

