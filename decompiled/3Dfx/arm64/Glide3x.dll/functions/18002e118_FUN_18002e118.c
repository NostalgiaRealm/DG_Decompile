/*
 * FUN_18002e118 at 18002e118
 * undefined __cdecl FUN_18002e118(longlong param_1, int param_2, uint param_3, uint param_4)
 * Address ranges: 18002e118-18002e3bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e118(longlong param_1,int param_2,uint param_3,uint param_4)

{
  LONG LVar1;
  LONG LVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_70 [8];
  undefined8 *local_68;
  ulonglong uStack_60;
  
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))();
  lVar7 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))
                    (*(longlong **)(param_1 + 0x3300),param_2);
  uVar5 = *(uint *)(lVar7 + 0x18);
  if (*(uint *)(lVar7 + 0x18) <= param_3) {
    uVar5 = param_3;
  }
  uVar10 = *(uint *)(lVar7 + 0x1c);
  if (param_4 <= *(uint *)(lVar7 + 0x1c)) {
    uVar10 = param_4;
  }
  if (uVar5 < uVar10) {
    iVar3 = *(int *)(param_1 + 0x2a2c);
    iVar4 = *(int *)(lVar6 + 0x10);
    if ((*(char *)(lVar6 + 0x48) == '\0') && (iVar4 != 5)) {
      uVar9 = 1;
      lVar7 = (ulonglong)*(uint *)(lVar6 + 8) * 2;
      uVar5 = (uint)(byte)(&DAT_18006f870)[lVar7];
      uVar10 = (uint)(byte)(&DAT_18006f871)[lVar7];
    }
    else {
      uVar9 = 0;
      uVar5 = 0;
      uVar10 = 0;
    }
    if (((*(int *)(lVar6 + 0x74) == 0) && (*(int *)(lVar6 + 0x78) == 0)) ||
       (((*(int *)(&DAT_180065c30 + (longlong)*(int *)(lVar6 + 0x6c) * 4) == *(int *)(lVar6 + 8) &&
         ((*(int *)(lVar6 + 0x70) == 0 && (*(char *)(lVar6 + 0x95) == '\0')))) &&
        ((iVar3 == 0 || (*(char *)(lVar6 + 0x48) != '\0')))))) {
      *(undefined4 *)(param_1 + 0x2ca0) = 0;
      *(undefined1 *)(param_1 + 0x32f0) = 1;
      uStack_60 = 0;
      local_68 = (undefined8 *)0x0;
      *(uint *)(param_1 + 0x29fc) = *(uint *)(param_1 + 0x29fc) | 0x80;
      uVar5 = FUN_180017418(param_1,1,param_2,0xff,0,'\0',(longlong)auStack_70,1,uVar9,uVar5,uVar10)
      ;
      if ((uVar5 & 1) != 0) {
        uVar5 = param_4 - param_3;
        puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x328) + (ulonglong)param_3);
        if (uVar5 != 0) {
          uVar14 = uStack_60 & 0xffffffff;
          puVar13 = local_68;
          do {
            uVar10 = *(int *)(lVar6 + 0x28) << 2;
            if (iVar4 != 5) {
              uVar10 = *(int *)(lVar6 + 0x28) << 1;
            }
            if (uVar5 <= uVar10) {
              uVar10 = uVar5;
            }
            thunk_FUN_1800010d8(puVar13,puVar12,(ulonglong)uVar10);
            puVar13 = (undefined8 *)((longlong)puVar13 + uVar14);
            uVar5 = uVar5 - uVar10;
            puVar12 = (undefined8 *)((longlong)puVar12 + (ulonglong)uVar10);
          } while (uVar5 != 0);
        }
        if ((param_3 != *(uint *)(lVar6 + 0x18)) || (uVar11 = 0, param_4 != *(uint *)(lVar6 + 0x1c))
           ) {
          uVar11 = 1;
        }
        LVar1 = *(LONG *)(lVar6 + 0x28);
        LVar2 = *(LONG *)(lVar6 + 0x2c);
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))
                          (*(longlong **)(param_1 + 0x3300),param_2);
        if ((*(int *)(lVar6 + 0x78) != 0) &&
           (iVar4 = *(int *)(lVar6 + 0x78) + -1, *(int *)(lVar6 + 0x78) = iVar4,
           *(int *)(lVar6 + 0x74) == 0 && iVar4 == 0)) {
          uVar8 = FUN_180016dc8(*(longlong **)(param_1 + 0x3300),param_2,uVar11,0,0,LVar1,LVar2,0);
          *(byte *)(lVar6 + 0x9a) = (byte)uVar8 | *(byte *)(lVar6 + 0x9a) & 0xfc;
        }
        (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x40))
                  (*(longlong **)(param_1 + 0x3300),param_2,uVar11,0);
      }
      *(int *)(param_1 + 0x2ca0) = iVar3;
      *(uint *)(param_1 + 0x29fc) = *(uint *)(param_1 + 0x29fc) & 0x7f;
      *(undefined1 *)(param_1 + 0x32f0) = 1;
    }
  }
  return;
}

