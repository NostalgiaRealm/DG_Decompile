/*
 * FUN_180070948 at 180070948
 * undefined __fastcall FUN_180070948(undefined8 param_1, uint * param_2, undefined4 param_3, uint param_4, int param_5, uint * param_6, longlong * param_7, char param_8, char param_9)
 * Address ranges: 180070948-180070bd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180070948(undefined8 param_1,uint *param_2,undefined4 param_3,uint param_4,int param_5,
                  uint *param_6,longlong *param_7,char param_8,char param_9)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  uint uVar7;
  undefined7 local_53;
  uint uStack_4c;
  
  param_6[0xcc] = *param_2 >> 7 & 0x2000;
  uVar4 = *param_2;
  bVar6 = (byte)(uVar4 >> 0x10) & (byte)((uint)param_3 >> 0x10) & 0xf;
  if (param_6[0xd0] != 0) goto LAB_180070a74;
  uVar7 = uVar4 & 0x7ff;
  uVar2 = uVar4 >> 0x14 & 0x700 | uVar4 & 0x1800;
  uVar3 = uVar2 >> 8;
  if (uVar2 == 0) {
    uVar4 = FUN_18006c684((ulonglong)(uVar4 & 0x1800),(longlong)param_6,uVar7);
  }
  else if (uVar3 == 8) {
    uVar4 = param_6[(ulonglong)uVar7 + 0xb4];
    if (uVar4 == 0) {
      uVar4 = FUN_1800ec8c0((longlong)param_6,4,'\x01');
      param_6[(ulonglong)uVar7 + 0xb4] = uVar4;
    }
  }
  else {
    if (uVar3 == 9) {
      param_6[0xd0] = 0x20000c00;
      *(undefined1 *)(param_6 + 0xd1) = 0;
      param_6[0xd4] = 0xffffffff;
      param_6[0xd7] = 0xffffffff;
      param_6[0xd6] = 0xffffffff;
      param_6[0xd5] = 0xffffffff;
      goto LAB_180070a74;
    }
    if (uVar3 != 0x13) goto LAB_180070a74;
    uVar4 = param_6[0xc3];
    if (uVar4 == 0) {
      uVar4 = FUN_1800ec8c0((longlong)param_6,4,'\x01');
      param_6[0xc3] = uVar4;
    }
  }
  param_6[0xd5] = 0xffffffff;
  param_6[0xd6] = 0xffffffff;
  param_6[0xd7] = 0xffffffff;
  param_6[0xd4] = 0xffffffff;
  *(byte *)(param_6 + 0xd1) = bVar6;
  param_6[0xd0] = uVar4;
LAB_180070a74:
  puVar1 = param_2 + 1;
  uVar4 = *puVar1 >> 0x14 & 0x700 | *puVar1 & 0x1800;
  puVar5 = (uint *)(ulonglong)(uVar4 >> 8);
  if ((char)(uVar4 >> 8) == '\x13') {
    if (param_6[0x13c] == 0xffffffff) {
      *(undefined8 *)(param_6 + 0xdc) = *(undefined8 *)(param_6 + 0xd0);
      *(undefined8 *)(param_6 + 0xde) = *(undefined8 *)(param_6 + 0xd2);
      *(undefined8 *)(param_6 + 0xf0) = *(undefined8 *)(param_6 + 0xd8);
      *(undefined8 *)(param_6 + 0xe0) = *(undefined8 *)(param_6 + 0xd4);
      *(undefined8 *)(param_6 + 0xe2) = *(undefined8 *)(param_6 + 0xd6);
      *(undefined8 *)(param_6 + 0xe4) = *(undefined8 *)(param_6 + 0xd8);
      *(undefined8 *)(param_6 + 0xe6) = *(undefined8 *)(param_6 + 0xda);
      *(undefined8 *)(param_6 + 0xe8) = *(undefined8 *)(param_6 + 0xd0);
      *(undefined8 *)(param_6 + 0xea) = *(undefined8 *)(param_6 + 0xd2);
      *(undefined8 *)(param_6 + 0xec) = *(undefined8 *)(param_6 + 0xd4);
      *(undefined8 *)(param_6 + 0xee) = *(undefined8 *)(param_6 + 0xd6);
      puVar5 = param_6;
      uVar4 = FUN_1800ec8c0((longlong)param_6,4,'\x01');
      param_6[0xd0] = uVar4;
      *(ulonglong *)((longlong)param_6 + 0x345) = CONCAT17((undefined1)uStack_4c,local_53);
      param_6[0xd3] = uStack_4c;
      *(byte *)(param_6 + 0xd1) = bVar6;
      param_6[0xd4] = 0xffffffff;
      param_6[0xd5] = 0xffffffff;
      param_6[0xd6] = 0xffffffff;
      param_6[0xd7] = 0xffffffff;
      *(undefined8 *)(param_6 + 0xf4) = *(undefined8 *)(param_6 + 0xd0);
      *(undefined8 *)(param_6 + 0xf6) = *(undefined8 *)(param_6 + 0xd2);
      *(undefined8 *)(param_6 + 0xf8) = *(undefined8 *)(param_6 + 0xd4);
      *(undefined8 *)(param_6 + 0xfa) = *(undefined8 *)(param_6 + 0xd6);
    }
    else {
      *(byte *)(param_6 + 0xdd) = (byte)param_6[0xdd] | bVar6;
    }
    puVar5 = (uint *)CONCAT71((int7)((ulonglong)puVar5 >> 8),0xe4);
    param_6[0x13c] = *puVar1;
    bVar6 = FUN_1800ee208(0xe4,(byte)param_6[0xdd]);
    *(byte *)(param_6 + 0xf5) = bVar6;
    *(byte *)(param_6 + 0xe9) = bVar6;
    param_2 = puVar1;
  }
  FUN_180070e04(puVar5,param_2 + 1,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}

