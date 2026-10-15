/*
 * FUN_180091978 at 180091978
 * undefined __fastcall FUN_180091978(longlong param_1, uint param_2, int param_3, int param_4)
 * Address ranges: 180091978-180091c2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180091978(longlong param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x178);
  uVar3 = (ulonglong)(param_3 * *(int *)(param_1 + 0x3c) + param_2);
  if (iVar1 == 1) {
    uVar5 = 0xf;
  }
  else if (iVar1 == 2) {
    uVar5 = 0x10;
  }
  else if (iVar1 == 4) {
    uVar5 = 0x11;
  }
  else if (iVar1 == 8) {
    uVar5 = 0x12;
  }
  else if (iVar1 == 0x10) {
    uVar5 = 0x13;
  }
  if (param_4 == 2) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(param_1 + 0x78);
    }
    FUN_18008d560(*(longlong *)(param_1 + 0x110),(ulonglong)*(uint *)(param_1 + 0x2c),
                  *(uint *)(param_1 + 0x2c),param_2,param_3,param_2,param_3,0.0,0,
                  (float)*(uint *)(param_1 + 0x24),(float)*(uint *)(param_1 + 0x28),0,0,
                  (float)*(uint *)(param_1 + 0x170),(float)*(uint *)(param_1 + 0x174),0,0,0,lVar4,
                  *(undefined8 *)(param_1 + 0x88),0,*(undefined8 *)(param_1 + 0x1d8),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 8 + uVar3 * 0x28),'\0',uVar5,1);
  }
  else if (param_4 == 1) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    if (lVar4 == 0) {
      lVar4 = *(longlong *)(param_1 + 0x78);
    }
    FUN_18008d560(*(longlong *)(param_1 + 0x110),(ulonglong)*(uint *)(param_1 + 0x2c),
                  *(uint *)(param_1 + 0x2c),param_2,param_3,param_2,param_3,0.0,0,
                  (float)*(uint *)(param_1 + 0x170),(float)*(uint *)(param_1 + 0x174),0,0,
                  (float)*(uint *)(param_1 + 0x170),(float)*(uint *)(param_1 + 0x174),0,0,0,lVar4,
                  *(undefined8 *)(param_1 + 0x88),0,*(undefined8 *)(param_1 + 0x130),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x148) + 8 + uVar3 * 0x28),'\0',uVar5,1);
    pbVar2 = (byte *)(param_1 + 0x250 + (ulonglong)(param_2 >> 6) * 8 +
                     ((longlong)(ulonglong)(param_2 & 0x3f) >> 3));
    *pbVar2 = *pbVar2 | '\x01' << ((ulonglong)(param_2 & 0x3f) & 7);
  }
  return;
}

