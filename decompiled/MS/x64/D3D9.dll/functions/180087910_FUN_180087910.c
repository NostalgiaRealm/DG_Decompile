/*
 * FUN_180087910 at 180087910
 * undefined __fastcall FUN_180087910(undefined8 param_1, longlong param_2, longlong * param_3, uint param_4)
 * Address ranges: 180087910-180087bc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180087910(undefined8 param_1,longlong param_2,longlong *param_3,uint param_4)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint local_res20 [2];
  uint local_98;
  undefined1 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_68 [16];
  
  puVar1 = (uint *)(param_2 + 0x20);
  puVar5 = (uint *)(ulonglong)*puVar1;
  lVar6 = param_2;
  uVar4 = FUN_1800ee040(*puVar1);
  if (((int)uVar4 != 0x51) && (*(char *)(lVar6 + 0x75) != '\0')) {
    uVar3 = FUN_1800ec8c0((longlong)puVar1,4,'\0');
    FUN_1800edbe0(puVar1,param_3,0xe,(ulonglong)uVar3);
    FUN_1800edbe0(puVar1,param_3,0,(ulonglong)uVar3);
    puVar5 = puVar1;
    FUN_1800edbe0(puVar1,param_3,0x36,(ulonglong)uVar3);
  }
  uVar8 = 0xf;
  FUN_1800850c0(puVar5,param_2,*(uint *)(param_2 + 0x1c0),0xf,&local_98);
  FUN_1800850c0(puVar5,param_2,*(uint *)(param_2 + 0x1c4),uVar8,local_68);
  FUN_1800edd10(puVar1,param_3,0x36,&local_98);
  FUN_1800edd10(puVar1,param_3,0x36,local_68);
  uVar9 = 0;
  local_res20[0] = *(uint *)(param_2 + 8) & 0x3f;
  uVar3 = 0;
  if (local_res20[0] != 0) {
    for (; (local_res20[0] >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  if (local_res20[0] == 0) goto LAB_180087b91;
  uVar7 = uVar3 & 0xff;
  pbVar2 = (byte *)((longlong)local_res20 + ((longlong)(int)uVar3 >> 3));
  *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
  while (uVar7 != 0xffffffff) {
    FUN_1800850c0((ulonglong)(uVar9 & 3),param_2,
                  *(uint *)(param_2 + 0x1c0 + (ulonglong)((uVar9 >> 2) + 0xd) * 4),
                  '\x01' << (sbyte)(uVar9 & 3),local_68);
    local_94 = 0xe4;
    local_88 = 0xffffffffffffffff;
    uStack_80 = 0xffffffffffffffff;
    local_98 = param_4;
    FUN_1800edd10(puVar1,param_3,0x11,local_68);
    uVar9 = uVar9 + 1;
    *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x4c) | 1 << ((byte)uVar7 & 0x1f);
    uVar3 = 0;
    if (local_res20[0] != 0) {
      for (; (local_res20[0] >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    if (local_res20[0] == 0) {
LAB_180087b91:
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = uVar3 & 0xff;
      pbVar2 = (byte *)((longlong)local_res20 + ((longlong)(int)uVar3 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
    }
  }
  return;
}

