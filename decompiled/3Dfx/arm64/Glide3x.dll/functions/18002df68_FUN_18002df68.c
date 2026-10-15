/*
 * FUN_18002df68 at 18002df68
 * undefined __cdecl FUN_18002df68(longlong * param_1, int param_2)
 * Address ranges: 18002df68-18002e117
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002df68(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_78 [8];
  undefined8 *local_70;
  ulonglong uStack_68;
  
  lVar6 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))();
  bVar4 = *(byte *)((longlong)param_1 + 0x13d);
  uStack_68 = 0;
  local_70 = (undefined8 *)0x0;
  if (((*(int *)(lVar6 + 0x74) == 0) && (*(int *)(lVar6 + 0x78) == 0)) ||
     ((*(int *)(lVar6 + 0x70) == 0 && ((bVar4 == 0 || (*(char *)(lVar6 + 0x48) != '\0')))))) {
    *(undefined4 *)(param_1 + 0x594) = 0;
    *(undefined1 *)(param_1 + 0x65e) = 1;
    uVar5 = FUN_180017418((longlong)param_1,0,param_2,0xff,0,'\0',(longlong)auStack_78,1,0,0,0);
    if ((uVar5 & 1) != 0) {
      uVar5 = 0;
      iVar3 = *(int *)(lVar6 + 0x10);
      puVar1 = (undefined8 *)(param_1[0x65] + (ulonglong)*(uint *)(lVar6 + 0x18));
      if (*(int *)(lVar6 + 0x24) != 0) {
        uVar7 = uStack_68 & 0xffffffff;
        puVar8 = local_70;
        puVar9 = puVar1;
        do {
          uVar2 = *(int *)(lVar6 + 0x20) << 2;
          if (iVar3 != 5) {
            uVar2 = *(int *)(lVar6 + 0x20) << 1;
          }
          thunk_FUN_1800010d8(puVar9,puVar8,(ulonglong)uVar2);
          uVar5 = uVar5 + 1;
          puVar8 = (undefined8 *)((longlong)puVar8 + uVar7);
          uVar2 = *(int *)(lVar6 + 0x20) << 2;
          if (iVar3 != 5) {
            uVar2 = *(int *)(lVar6 + 0x20) << 1;
          }
          puVar9 = (undefined8 *)((longlong)puVar9 + (ulonglong)uVar2);
        } while (uVar5 < *(uint *)(lVar6 + 0x24));
      }
      FUN_1800175e8((longlong)param_1,0,param_2,0,0,0,0,0,0);
      (**(code **)(*param_1 + 0x2f0))
                (param_1,puVar1,*(int *)(lVar6 + 0x18),
                 *(int *)(lVar6 + 0x1c) - *(int *)(lVar6 + 0x18));
    }
    *(uint *)(param_1 + 0x594) = (uint)bVar4;
    *(undefined1 *)(param_1 + 0x65e) = 1;
  }
  *(byte *)(lVar6 + 0x4a) = *(byte *)(lVar6 + 0x4a) & 0xfd;
  return;
}

