/*
 * FUN_1800284f0 at 1800284f0
 * undefined __fastcall FUN_1800284f0(longlong * param_1, uint param_2)
 * Address ranges: 1800284f0-180028685
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800284f0(longlong *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 local_58 [8];
  undefined8 *local_50;
  ulonglong uStack_48;
  
  lVar5 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))();
  uVar8 = 0;
  bVar1 = *(byte *)((longlong)param_1 + 0x13d);
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  if (((*(int *)(lVar5 + 0x74) == 0) && (*(int *)(lVar5 + 0x78) == 0)) ||
     ((*(int *)(lVar5 + 0x70) == 0 && ((bVar1 == 0 || (*(char *)(lVar5 + 0x48) != '\0')))))) {
    *(undefined4 *)(param_1 + 0x594) = 0;
    *(undefined1 *)(param_1 + 0x65e) = 1;
    cVar4 = FUN_180014ca4((longlong)param_1,0,(ulonglong)param_2,0xff,0,'\0',(longlong)local_58,
                          '\x01',0,0,0);
    if (cVar4 != '\0') {
      puVar6 = (undefined8 *)((ulonglong)*(uint *)(lVar5 + 0x18) + param_1[0x65]);
      if (*(int *)(lVar5 + 0x24) != 0) {
        iVar2 = *(int *)(lVar5 + 0x10);
        puVar7 = local_50;
        puVar9 = puVar6;
        do {
          uVar3 = *(int *)(lVar5 + 0x20) * 2;
          if (iVar2 == 5) {
            uVar3 = *(int *)(lVar5 + 0x20) * 4;
          }
          FUN_180061330(puVar9,puVar7,(ulonglong)uVar3);
          puVar7 = (undefined8 *)((longlong)puVar7 + (uStack_48 & 0xffffffff));
          uVar3 = *(int *)(lVar5 + 0x20) * 2;
          if (iVar2 == 5) {
            uVar3 = *(int *)(lVar5 + 0x20) * 4;
          }
          uVar8 = uVar8 + 1;
          puVar9 = (undefined8 *)((longlong)puVar9 + (ulonglong)uVar3);
        } while (uVar8 < *(uint *)(lVar5 + 0x24));
      }
      FUN_180014e3c((longlong)param_1,0,param_2,0,0,0,0,0,0);
      (**(code **)(*param_1 + 0x2f0))
                (param_1,puVar6,*(int *)(lVar5 + 0x18),
                 *(int *)(lVar5 + 0x1c) - *(int *)(lVar5 + 0x18));
    }
    *(uint *)(param_1 + 0x594) = (uint)bVar1;
    *(undefined1 *)(param_1 + 0x65e) = 1;
  }
  *(byte *)(lVar5 + 0x4a) = *(byte *)(lVar5 + 0x4a) & 0xfd;
  return;
}

