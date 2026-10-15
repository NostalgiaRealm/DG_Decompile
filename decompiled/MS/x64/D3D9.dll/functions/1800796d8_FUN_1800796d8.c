/*
 * FUN_1800796d8 at 1800796d8
 * undefined __fastcall FUN_1800796d8(uint * param_1, longlong * param_2, longlong * param_3, longlong param_4, uint param_5)
 * Address ranges: 1800796d8-180079b15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800796d8(uint *param_1,longlong *param_2,longlong *param_3,longlong param_4,uint param_5)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined7 uVar7;
  
  *(undefined4 *)(param_4 + 0x2d8) = 0x110803;
  puVar5 = (uint *)(param_4 + 0x20);
  *(undefined4 *)(param_4 + 0x2d4) = 0x210803;
  uVar9 = 0;
  *(undefined4 *)(param_4 + 0x2d0) = 0x310803;
  *(undefined4 *)(param_4 + 0x2cc) = 0x410803;
  *(undefined4 *)(param_4 + 0x2e8) = 0x110804;
  *(undefined4 *)(param_4 + 0x2e4) = 0x210804;
  *(undefined4 *)(param_4 + 0x2e0) = 0x310804;
  *(undefined4 *)(param_4 + 0x2dc) = 0x410804;
  *(undefined4 *)(param_4 + 0xb8) = 0x110400;
  *(undefined4 *)(param_4 + 0xbc) = 0x410400;
  *(undefined4 *)(param_4 + 0xc0) = 0x20000d00;
  if (*(char *)(*(longlong *)(param_4 + 0x10) + 0x4884) == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(uint *)(param_4 + 0x70);
    *(uint *)(param_4 + 0x70) = uVar3 + 1;
    *(undefined4 *)(param_4 + 0x60 + (ulonglong)uVar3 * 4) = 0x10;
  }
  puVar6 = param_1;
  if (*(char *)(param_4 + 0x53e) != '\0') {
    uVar4 = uVar9;
    do {
      if ((*(char *)(*(longlong *)(param_4 + 0x10) + 0x10 + uVar4) != '\0') &&
         (*(char *)(*(longlong *)(param_4 + 0x10) + uVar4) == '\0')) {
        uVar8 = FUN_180077310(param_1,param_2,param_4,0);
        puVar6 = *(uint **)(param_4 + 0x10);
        if ((*(byte *)((longlong)puVar6 + uVar4 + 0x10) & 3) != 0) {
          puVar6 = puVar5;
          FUN_1800edbe0(puVar5,param_2,0x36,(ulonglong)uVar8);
        }
        *(uint *)(param_4 + 0x100 + uVar4 * 4) = uVar8;
        if (uVar3 != 0xffffffff) {
          uVar8 = uVar3 << 0xe | (uint)uVar4 | 0x420300;
          *(uint *)(param_4 + 0x23c + uVar4 * 4) = uVar8;
          puVar6 = puVar5;
          FUN_1800edbe0(puVar5,param_2,0x36,(ulonglong)uVar8);
        }
        break;
      }
      uVar8 = (uint)uVar4 + 1;
      uVar4 = (ulonglong)uVar8;
    } while (uVar8 < 0x10);
  }
  if (*(char *)(param_4 + 0x53f) != '\0') {
    uVar4 = uVar9;
    do {
      if ((*(char *)(*(longlong *)(param_4 + 0x10) + 0x10 + uVar4) != '\0') &&
         (*(char *)(*(longlong *)(param_4 + 0x10) + uVar4) == '0')) {
        uVar8 = FUN_180077874(puVar6,param_2,param_4,0);
        puVar6 = *(uint **)(param_4 + 0x10);
        if ((*(byte *)((longlong)puVar6 + uVar4 + 0x10) & 3) != 0) {
          puVar6 = puVar5;
          FUN_1800edbe0(puVar5,param_2,0x36,(ulonglong)uVar8);
        }
        *(uint *)(param_4 + 0x100 + uVar4 * 4) = uVar8;
        if (uVar3 != 0xffffffff) {
          uVar8 = uVar3 << 0xe | (uint)uVar4 | 0x420300;
          *(uint *)(param_4 + 0x23c + uVar4 * 4) = uVar8;
          FUN_1800edbe0(puVar5,param_2,0x36,(ulonglong)uVar8);
          puVar6 = puVar5;
        }
        break;
      }
      uVar8 = (uint)uVar4 + 1;
      uVar4 = (ulonglong)uVar8;
    } while (uVar8 < 0x10);
  }
  do {
    bVar1 = *(byte *)(uVar9 + 0x10 + *(longlong *)(param_4 + 0x10));
    uVar7 = (undefined7)((ulonglong)puVar6 >> 8);
    puVar6 = (uint *)CONCAT71(uVar7,bVar1);
    if ((bVar1 != 0) && (cVar2 = *(char *)(uVar9 + *(longlong *)(param_4 + 0x10)), cVar2 != -1)) {
      if (cVar2 == '\0') {
        cVar2 = *(char *)(param_4 + 0x53e);
LAB_18007999d:
        if (cVar2 != '\0') goto LAB_180079a2c;
      }
      else if (cVar2 == '0') {
        cVar2 = *(char *)(param_4 + 0x53f);
        goto LAB_18007999d;
      }
      puVar6 = (uint *)CONCAT71(uVar7,0xe4);
      FUN_1800ee208(0xe4,bVar1);
      uVar4 = FUN_180077b10(puVar6,param_2,param_4,0);
      *(int *)(param_4 + 0x100 + uVar9 * 4) = (int)uVar4;
      if (uVar3 != 0xffffffff) {
        uVar8 = uVar3 << 0xe | (uint)uVar9 | 0x420300;
        puVar6 = (uint *)(param_4 + 0x20);
        *(uint *)(param_4 + 0x23c + uVar9 * 4) = uVar8;
        FUN_1800edbe0(puVar6,param_2,0x36,(ulonglong)uVar8);
      }
    }
LAB_180079a2c:
    puVar5 = (uint *)(param_4 + 0x20);
    uVar8 = (uint)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    if (0xf < uVar8) {
      lVar10 = 0;
      do {
        if (*(char *)(lVar10 + 0x20 + *(longlong *)(param_4 + 0x10)) != '\0') {
          puVar6 = puVar5;
          uVar3 = FUN_1800ec8c0((longlong)puVar5,4,'\x01');
          *(uint *)(param_4 + 0x140 + lVar10 * 4) = uVar3;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x20);
      FUN_180084aec(puVar6,param_4,param_2,param_5);
      cVar2 = *(char *)(*(longlong *)(param_4 + 0x10) + 0x4a6c);
      if ((cVar2 == '\x02') || (cVar2 == '\x03')) {
        FUN_18007b0b4(puVar6,param_4);
      }
      if (*(char *)(*(longlong *)(param_4 + 0x10) + 0x40) == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_1800ec8c0((longlong)puVar5,4,'\x01');
      }
      *(uint *)(param_4 + 0x238) = uVar3;
      FUN_180085828(param_1,*(uint **)(param_4 + 0xd0),param_4,param_2);
      FUN_18007df30(param_1,*(longlong *)(param_4 + 0xd0),param_4,param_3);
      FUN_180087cac(param_1,param_4,param_2);
      return;
    }
  } while( true );
}

