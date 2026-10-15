/*
 * FUN_1800a20a8 at 1800a20a8
 * int __fastcall FUN_1800a20a8(longlong * param_1, char param_2)
 * Address ranges: 1800a20a8-1800a2252
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800a20a8(longlong *param_1,char param_2)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 in_stack_ffffffffffffff90;
  undefined4 in_stack_ffffffffffffff94;
  undefined8 local_58 [4];
  
  if ((*(char *)((longlong)param_1 + 0x24d) == '\0') ||
     (*(char *)((longlong)param_1 + 0x24e) == '\0')) {
    iVar3 = FUN_18009b5bc(param_1,param_2);
  }
  else {
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      do {
        uVar7 = uVar10;
        if ((int)param_1[6] != 0) {
          uVar9 = 0;
          uVar10 = 1 << ((byte)uVar8 & 0x1f);
          do {
            uVar6 = uVar7;
            if (*(longlong *)((longlong)param_1 + 0x84) != 0) {
              BVar2 = IsRectEmpty((RECT *)((ulonglong)(uVar8 * *(int *)((longlong)param_1 + 0x3c)) *
                                           0x20 + *(longlong *)((longlong)param_1 + 0x84) + 0x10));
              uVar6 = uVar10 | uVar7;
              if (BVar2 != 0) {
                uVar6 = uVar7;
              }
            }
            cVar1 = FUN_1800a1190((longlong)param_1,uVar9,uVar8,1);
            uVar7 = uVar10 | uVar6;
            if (cVar1 == '\0') {
              uVar7 = uVar6;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(uint *)(param_1 + 6));
        }
        uVar9 = *(uint *)((longlong)param_1 + 0x34);
        uVar8 = uVar8 + 1;
        uVar10 = uVar7;
      } while (uVar8 < uVar9);
    }
    if (*(int *)((longlong)param_1 + 0x44) - 3U < 3) {
      if (*(longlong *)((longlong)param_1 + 0x154) == 0) {
        uVar4 = FUN_18009f438((longlong)param_1);
        puVar5 = FUN_1800ac1a8(local_58,(uint)uVar4);
        FUN_18009aaec(param_1 + 0x28,*(longlong **)((longlong)param_1 + 0x74),
                      *(int *)((longlong)puVar5 + 4),0,
                      *(undefined4 *)
                       (&DAT_1800fe8f0 + (ulonglong)*(uint *)((longlong)param_1 + 0x2c) * 4),
                      CONCAT44(in_stack_ffffffffffffff94,in_stack_ffffffffffffff90),
                      *(int *)(puVar5 + 2),uVar9 != 1);
      }
      iVar3 = *(int *)((longlong)param_1 + 0x16c);
    }
    else {
      if (*(longlong *)((longlong)param_1 + 0x154) == 0) {
        FUN_1800a0198((longlong)param_1);
      }
      iVar3 = *(int *)((longlong)param_1 + 0x16c);
      if ((param_2 != '\0') && (iVar3 != -1)) {
        FUN_18009ade0(param_1 + 0x28,*(int *)((longlong)param_1 + 0x34) != 1,
                      *(longlong *)((longlong)param_1 + 0x74));
        iVar3 = (int)param_1[0x2f];
      }
      if (uVar7 != 0) {
        FUN_18009c65c(param_1,(longlong)(param_1 + 0xc),uVar7,*(uint *)((longlong)param_1 + 0x16c),
                      (uint)(*(int *)((longlong)param_1 + 0x34) != 1),0);
      }
    }
  }
  return iVar3;
}

