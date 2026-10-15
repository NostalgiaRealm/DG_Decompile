/*
 * FUN_180028688 at 180028688
 * undefined __fastcall FUN_180028688(longlong param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 180028688-1800288d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028688(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined1 local_58 [8];
  undefined8 *local_50;
  ulonglong uStack_48;
  
  lVar5 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))();
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))
                    (*(longlong **)(param_1 + 0x3300),param_2);
  uVar10 = param_3;
  if (param_3 < *(uint *)(lVar6 + 0x18)) {
    uVar10 = *(uint *)(lVar6 + 0x18);
  }
  uVar7 = param_4;
  if (*(uint *)(lVar6 + 0x1c) < param_4) {
    uVar7 = *(uint *)(lVar6 + 0x1c);
  }
  if (uVar10 < uVar7) {
    iVar1 = *(int *)(param_1 + 0x2a2c);
    iVar2 = *(int *)(lVar5 + 0x10);
    uVar8 = 0;
    if ((*(char *)(lVar5 + 0x48) == '\0') && (iVar2 != 5)) {
      uVar8 = 1;
      uVar10 = (uint)(byte)(&DAT_18006d870)[(ulonglong)*(uint *)(lVar5 + 8) * 2];
      uVar7 = (uint)(byte)(&DAT_18006d871)[(ulonglong)*(uint *)(lVar5 + 8) * 2];
    }
    else {
      uVar10 = 0;
      uVar7 = 0;
    }
    if (((*(int *)(lVar5 + 0x74) == 0) && (*(int *)(lVar5 + 0x78) == 0)) ||
       (((*(int *)(&DAT_180062cd0 + (longlong)*(int *)(lVar5 + 0x6c) * 4) == *(int *)(lVar5 + 8) &&
         ((*(int *)(lVar5 + 0x70) == 0 && (*(char *)(lVar5 + 0x95) == '\0')))) &&
        ((iVar1 == 0 || (*(char *)(lVar5 + 0x48) != '\0')))))) {
      *(uint *)(param_1 + 0x29fc) = *(uint *)(param_1 + 0x29fc) | 0x80;
      *(undefined4 *)(param_1 + 0x2ca0) = 0;
      *(undefined1 *)(param_1 + 0x32f0) = 1;
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      cVar3 = FUN_180014ca4(param_1,1,(ulonglong)param_2,0xff,0,'\0',(longlong)local_58,'\x01',uVar8
                            ,uVar10,uVar7);
      if (cVar3 != '\0') {
        puVar11 = (undefined8 *)((ulonglong)param_3 + *(longlong *)(param_1 + 0x328));
        puVar9 = local_50;
        for (uVar10 = param_4 - param_3; uVar10 != 0; uVar10 = uVar10 - uVar4) {
          uVar7 = *(int *)(lVar5 + 0x28) * 2;
          if (iVar2 == 5) {
            uVar7 = *(int *)(lVar5 + 0x28) * 4;
          }
          uVar4 = uVar10;
          if (uVar7 < uVar10) {
            uVar4 = uVar7;
          }
          FUN_180061330(puVar9,puVar11,(ulonglong)uVar4);
          puVar11 = (undefined8 *)((longlong)puVar11 + (ulonglong)uVar4);
          puVar9 = (undefined8 *)((longlong)puVar9 + (uStack_48 & 0xffffffff));
        }
        if ((param_3 == *(uint *)(lVar5 + 0x18)) && (param_4 == *(uint *)(lVar5 + 0x1c))) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        FUN_180014e3c(param_1,1,param_2,uVar8,0,0,*(LONG *)(lVar5 + 0x28),*(LONG *)(lVar5 + 0x2c),0)
        ;
        (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x40))
                  (*(longlong **)(param_1 + 0x3300),param_2,uVar8,0);
      }
      *(uint *)(param_1 + 0x29fc) = *(uint *)(param_1 + 0x29fc) & 0x7f;
      *(int *)(param_1 + 0x2ca0) = iVar1;
      *(undefined1 *)(param_1 + 0x32f0) = 1;
    }
  }
  return;
}

