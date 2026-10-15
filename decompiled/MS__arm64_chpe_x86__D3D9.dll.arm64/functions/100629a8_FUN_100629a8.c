/*
 * FUN_100629a8 at 100629a8
 * undefined FUN_100629a8(void)
 * Address ranges: 100629a8-10062e03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100629a8(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                 int param_7,uint param_8,char param_9)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  char in_stack_00000010;
  
  FUN_1005c0c8(param_1);
  plVar1 = (longlong *)(*(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304) + 0x908);
  lVar4 = *plVar1 + 1;
  *plVar1 = lVar4;
  *(longlong *)(param_1 + 0xfc30) = lVar4;
  if ((param_2 == 6) && (*(char *)(*(int *)(param_1 + 0xf6bc) + 0x13) == '\0')) {
    if (2 < param_8) {
      param_8 = param_8 - 2;
      if (param_8 != 0) {
        piVar2 = (int *)(param_1 + 0x6c);
        iVar14 = 0;
        while( true ) {
          iVar12 = *piVar2 + *(int *)(param_1 + 0x68);
          if (0x1000U - iVar12 < 0x10) {
            FUN_1005df78(param_1,0,1,0);
            iVar12 = 0;
          }
          uVar6 = (0x1000U - iVar12) / 3;
          if (param_8 < (0x1000U - iVar12) / 3) {
            uVar6 = param_8;
          }
          if (param_4 == 0) {
            FUN_1005c208(param_1,4,param_3);
          }
          else {
            FUN_10061d38(param_1,4,param_4 + -0x18,*(undefined4 *)(param_1 + 0xfbc8),
                         *(undefined4 *)(param_1 + 0xf6d0),*(undefined4 *)(param_1 + 0x104c),
                         *(undefined4 *)(param_1 + 0x1008),0,uVar6 * 3);
          }
          *(byte *)(param_1 + 0xf66f) =
               (*(uint *)(param_3 + 0x10) & (*(uint *)(param_1 + 0xfd90) ^ 0xffffffff)) != 0 |
               *(byte *)(param_1 + 0xf66f);
          *(uint *)(param_1 + 0xfd90) = *(uint *)(param_3 + 0x10);
          *(undefined1 *)(param_1 + 0xfd94) = 1;
          if (uVar6 != 0) {
            piVar3 = (int *)(param_1 + 100);
            puVar7 = (uint *)*piVar3;
            uVar13 = 0;
            do {
              iVar12 = iVar14 + param_7 + uVar13 + 1;
              iVar5 = iVar14 + param_7 + uVar13;
              if (param_9 == '\0') {
                uVar9 = (uint)*(ushort *)(param_5 + param_7 * 2);
                uVar11 = (uint)*(ushort *)(param_5 + iVar5 * 2 + 4);
                uVar10 = (uint)*(ushort *)(param_5 + iVar12 * 2);
              }
              else {
                uVar9 = *(uint *)(param_5 + param_7 * 4);
                uVar11 = *(uint *)(param_5 + iVar5 * 4 + 8);
                uVar10 = *(uint *)(param_5 + iVar12 * 4);
              }
              *puVar7 = uVar10;
              uVar13 = uVar13 + 1;
              *(uint *)(*piVar3 + 4) = uVar11;
              *(uint *)(*piVar3 + 8) = uVar9;
              puVar7 = (uint *)(*piVar3 + 0xc);
              *piVar3 = (int)puVar7;
            } while (uVar13 < uVar6);
          }
          param_8 = param_8 - uVar6;
          *piVar2 = *piVar2 + uVar6 * 3;
          if (param_8 == 0) break;
          iVar14 = uVar6 + iVar14;
          FUN_1005e378(param_1,param_3);
          *(undefined4 *)(param_1 + 0x70) = param_6;
        }
        *(undefined4 *)(param_1 + 0x70) = param_6;
      }
      FUN_1005df78(param_1,0,0,0);
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  else if (*(int *)(param_1 + 0xfbcc) != 0) {
    if (param_4 == 0) {
      iVar14 = 1;
      FUN_1005c208(param_1,param_2,param_3);
    }
    else {
      FUN_10061d38(param_1,param_2,param_4 + -0x18,*(undefined4 *)(param_1 + 0xfbc8),
                   *(int *)(param_1 + 0xfbcc),*(undefined4 *)(param_1 + 0x104c),
                   *(undefined4 *)(param_1 + 0x1008),0,0);
      iVar14 = *(int *)(param_4 + 0x20);
      if (iVar14 == 0) {
        iVar14 = 1;
      }
    }
    *(byte *)(param_1 + 0xf66f) =
         (*(uint *)(param_3 + 0x10) & (*(uint *)(param_1 + 0xfd90) ^ 0xffffffff)) != 0 |
         *(byte *)(param_1 + 0xf66f);
    *(uint *)(param_1 + 0xfd90) = *(uint *)(param_3 + 0x10);
    *(undefined1 *)(param_1 + 0xfd94) = 1;
    cVar8 = FUN_10058a58(param_1);
    if (cVar8 != '\0' && param_7 != -1) {
      FUN_10116230(*(undefined4 *)(*(int *)(param_1 + 0xf6b8) + 0x1304),param_8,iVar14,param_7,
                   param_6,0);
    }
    FUN_1005c070(param_1);
  }
  if (in_stack_00000010 != '\0') {
    FUN_10114450(*(undefined4 *)(*(int *)(param_1 + 0xf6b8) + 0x1304),
                 *(undefined8 *)(param_1 + 0xfc30));
  }
  return;
}

