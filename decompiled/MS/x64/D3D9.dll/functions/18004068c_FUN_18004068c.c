/*
 * FUN_18004068c at 18004068c
 * ulonglong __fastcall FUN_18004068c(longlong param_1)
 * Address ranges: 18004068c-180040821
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18004068c(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 local_2c;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar10 = (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0 + lVar2;
  if (*(int *)(param_1 + 0x28) == 1) {
    puVar5 = FUN_1800e8040(-(ulonglong)(lVar2 != 0) & lVar2 + 0x6d0U,*(uint *)(param_1 + 0x20),
                           (ulonglong)(-(uint)(*(char *)(param_1 + 0x31) != '\0') & 0x90) +
                           lVar10 + 0x1eb0,*(undefined4 *)(param_1 + 0x24),
                           -(ulonglong)(lVar2 != 0) & lVar2 + 0x6a8U);
LAB_18004075d:
    uVar8 = 0;
    if (puVar5 != (undefined8 *)0x0) goto LAB_180040769;
LAB_18004081e:
    uVar8 = uVar8 & 0xffffffffffffff00;
  }
  else {
    bVar3 = *(int *)(param_1 + 0x28) - 2U < 2;
    puVar5 = (undefined8 *)
             FUN_1800e87a0(lVar10 + 0x2140,(ulonglong)*(uint *)(param_1 + 0x24),bVar3 + 1);
    if (puVar5 == (undefined8 *)0x0) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      puVar5 = FUN_1800e8998(-(ulonglong)(lVar2 != 0) & lVar2 + 0x6d0U,
                             *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                             bVar3 + 1,0,*(undefined8 *)(lVar2 + 0x1b500));
      goto LAB_18004075d;
    }
LAB_180040769:
    iVar4 = *(int *)(param_1 + 0x44);
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    if (*(int *)(param_1 + 0x40) == iVar4) {
      uVar9 = 0x10;
      if (iVar4 != 0) {
        uVar9 = iVar4 * 2;
      }
      uVar6 = SUB168(ZEXT816(0x10) * ZEXT416(uVar9),0);
      if (SUB168(ZEXT816(0x10) * ZEXT416(uVar9),8) != 0) {
        uVar6 = 0xffffffffffffffff;
      }
      puVar7 = (undefined8 *)thunk_FUN_1800fbccc(uVar6);
      if (puVar7 == (undefined8 *)0x0) {
        uVar8 = (**(code **)*puVar5)(puVar5,1);
        goto LAB_18004081e;
      }
      FUN_1800fbec0(puVar7,*(undefined8 **)(param_1 + 0x38),
                    (ulonglong)*(uint *)(param_1 + 0x44) << 4);
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x38));
      *(undefined8 **)(param_1 + 0x38) = puVar7;
      *(uint *)(param_1 + 0x44) = uVar9;
    }
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x40);
    lVar2 = *(longlong *)(param_1 + 0x38);
    *(undefined8 **)(lVar2 + uVar8 * 0x10) = puVar5;
    *(undefined4 *)(lVar2 + 8 + uVar8 * 0x10) = uVar1;
    *(undefined4 *)(lVar2 + 0xc + uVar8 * 0x10) = local_2c;
    iVar4 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar4 + 1;
    *(int *)(*(longlong *)(param_1 + 0x38) + 8 + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10) =
         iVar4;
    iVar4 = *(int *)(param_1 + 0x40) + -1;
    *(int *)(param_1 + 0x4c) = iVar4;
    uVar8 = CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
  }
  return uVar8;
}

