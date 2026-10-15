/*
 * FUN_1800700f8 at 1800700f8
 * undefined __fastcall FUN_1800700f8(undefined8 param_1, longlong param_2, longlong * param_3, ulonglong param_4)
 * Address ranges: 1800700f8-1800702f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800700f8(undefined8 param_1,longlong param_2,longlong *param_3,ulonglong param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  cVar1 = *(char *)(param_2 + 0x66);
  uVar3 = 2;
  uVar7 = (-(uint)(cVar1 != '\0') & 4) + 2;
  uVar8 = (-(uint)(cVar1 != '\0') & 3) + 3;
  if (*(byte *)(param_2 + 0x44) != 0) {
    FUN_1800ee464(param_3,0,*(byte *)(param_2 + 0x44),(-(uint)(cVar1 != '\0') & 3) + 4);
  }
  if (*(byte *)(param_2 + 0x45) != 0) {
    FUN_1800ee42c(param_3,1,*(byte *)(param_2 + 0x45),uVar7);
  }
  cVar1 = *(char *)(*(longlong *)(param_2 + 0x100) + 0x126d);
  if (cVar1 == '\x02') {
    do {
      bVar2 = *(byte *)((ulonglong)(uVar3 - 2) + *(longlong *)(param_2 + 0x100));
      if (bVar2 != 0) {
        uVar6 = uVar8;
        if ((param_4 >> 0x37 & 1) != 0) {
          uVar6 = 1;
        }
        FUN_1800ee42c(param_3,(ulonglong)uVar3,bVar2,uVar6);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    if (*(byte *)(param_2 + 0x48) != 0) {
      FUN_1800ee42c(param_3,4,*(byte *)(param_2 + 0x48),uVar7);
    }
    uVar4 = 5;
    do {
      uVar3 = (int)uVar4 - 5;
      bVar2 = *(byte *)((ulonglong)uVar3 + 0x2a + *(longlong *)(param_2 + 0x100));
      if (bVar2 != 0) {
        uVar6 = uVar7;
        if ((*(byte *)(*(longlong *)(param_2 + 0x100) + 0x140 + ((longlong)(int)uVar3 >> 3)) >>
             (uVar3 & 7) & 1) != 0) {
          uVar6 = uVar8;
        }
        FUN_1800ee42c(param_3,uVar4,bVar2,uVar6);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < 0xd);
  }
  else if (cVar1 == '\x03') {
    uVar4 = 2;
    do {
      bVar2 = *(byte *)(param_2 + 0x44 + uVar4);
      if (bVar2 != 0) {
        uVar3 = uVar7;
        if (*(char *)(param_2 + 0x57 + uVar4) != '\0') {
          uVar3 = uVar8;
        }
        FUN_1800ee42c(param_3,uVar4,bVar2,uVar3);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < 0xd);
  }
  if (*(byte *)(param_2 + 0x51) != 0) {
    FUN_1800eddec(param_3,4,0x4000863,(ulonglong)((uint)*(byte *)(param_2 + 0x51) << 4 | 0x101002));
  }
  lVar5 = 0;
  do {
    if (*(char *)(lVar5 + 0x14b + *(longlong *)(param_2 + 0x100)) != '\0') {
      FUN_1800eddec(param_3,3,0x3000065,0x1020f2);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  if (*(char *)(*(longlong *)(param_2 + 0x100) + 0x330) != '\0') {
    FUN_1800eddec(param_3,2,0x2000065,0xc001);
  }
  return;
}

