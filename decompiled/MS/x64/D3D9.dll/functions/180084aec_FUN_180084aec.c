/*
 * FUN_180084aec at 180084aec
 * undefined __fastcall FUN_180084aec(undefined8 param_1, longlong param_2, longlong * param_3, uint param_4)
 * Address ranges: 180084aec-180084ca1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180084aec(undefined8 param_1,longlong param_2,longlong *param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  do {
    uVar3 = (uint)uVar7;
    if (param_4 == 0xffffffff) {
      uVar4 = uVar3 | 0x410200;
    }
    else {
      uVar4 = param_4 << 0xe | uVar3 | 0x420300;
    }
    *(uint *)(param_2 + 0x1c0 + uVar7 * 4) = uVar4;
    uVar7 = (ulonglong)(uVar3 + 1);
  } while (uVar3 + 1 < 0xf);
  cVar1 = *(char *)(*(longlong *)(param_2 + 0x10) + 0x4a6c);
  if (cVar1 == '\x01') {
    uVar3 = FUN_1800ec8c0(param_2 + 0x20,4,'\x01');
    *(uint *)(param_2 + 0x1fc) = uVar3;
    uVar7 = 0;
    *(undefined4 *)(param_2 + 0x200) = *(undefined4 *)(param_2 + 0x1d0);
    *(undefined4 *)(param_2 + 0x204) = *(undefined4 *)(param_2 + 0x1d0);
    *(undefined4 *)(param_2 + 0x208) = *(undefined4 *)(param_2 + 0x1c8);
    *(undefined4 *)(param_2 + 0x20c) = *(undefined4 *)(param_2 + 0x1cc);
    do {
      *(undefined4 *)(param_2 + 0x210 + uVar7 * 4) =
           *(undefined4 *)(param_2 + 0x1c0 + (ulonglong)((int)uVar7 + 5) * 4);
      uVar3 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar3;
    } while (uVar3 < 8);
  }
  else if (cVar1 == '\x02') {
    lVar5 = param_2 + 0x20;
    uVar3 = FUN_1800ec8c0(lVar5,4,'\x01');
    *(uint *)(param_2 + 0x1fc) = uVar3;
    if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x444) < '\0') {
      uVar3 = FUN_18007b134(lVar5,param_2,param_3);
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x1c8);
    }
    *(uint *)(param_2 + 0x208) = uVar3;
    if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x445) < '\0') {
      uVar3 = FUN_18007b134(lVar5,param_2,param_3);
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x1cc);
    }
    *(uint *)(param_2 + 0x20c) = uVar3;
    bVar2 = *(byte *)(*(longlong *)(param_2 + 0x10) + 0x442);
    if ((char)(*(byte *)(*(longlong *)(param_2 + 0x10) + 0x443) | bVar2) < '\0') {
      uVar3 = FUN_18007b134(CONCAT71((int7)((ulonglong)lVar5 >> 8),bVar2),param_2,param_3);
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x1d0);
    }
    *(uint *)(param_2 + 0x200) = uVar3;
    uVar7 = 0;
    *(uint *)(param_2 + 0x204) = uVar3;
    do {
      uVar6 = (ulonglong)((int)uVar7 + 5);
      if (*(char *)(uVar7 + 0x446 + *(longlong *)(param_2 + 0x10)) < '\0') {
        uVar3 = FUN_18007b134(uVar6,param_2,param_3);
      }
      else {
        uVar3 = *(uint *)(param_2 + 0x1c0 + uVar6 * 4);
      }
      *(uint *)(param_2 + 0x210 + uVar7 * 4) = uVar3;
      uVar3 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar3;
    } while (uVar3 < 8);
  }
  else if (cVar1 == '\x03') {
    FUN_18007b22c(1,param_2,param_3,param_4);
  }
  return;
}

