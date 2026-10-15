/*
 * FUN_10004daf at 10004daf
 * uint __thiscall FUN_10004daf(void * this, int param_1, int * param_2, int * param_3)
 * Address ranges: 10004daf-10004f37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10004daf(void *this,int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  uVar4 = FUN_10018ac7(this,param_1,param_2);
  if (-1 < (int)uVar4) {
    iVar1 = *(int *)(*(int *)((int)this + 0x3b4) + -4 + *param_2 * 4);
    *(undefined2 *)(iVar1 + 0xa118) = 0xffff;
    *(undefined2 *)(iVar1 + 0xa91c) = 0xffff;
    if ((param_1 == 3) || (param_1 == 1)) {
      puVar6 = (undefined4 *)((int)this + 0x12ac);
      puVar8 = (undefined4 *)(iVar1 + 0x6118);
      for (iVar5 = *(int *)((int)this + 0xdd4) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined2 *)(iVar1 + 0xa118) = 0;
      *(undefined2 *)(iVar1 + 0xa11a) = *(undefined2 *)((int)this + 0xdd4);
      *(undefined2 *)(iVar1 + 0xa11c) = 0xffff;
      *(undefined1 *)(iVar1 + 0xac1d) = 1;
    }
    if ((param_1 == 2) || (param_1 == 1)) {
      puVar6 = (undefined4 *)((int)this + 0x52ac);
      puVar8 = (undefined4 *)(iVar1 + 0x5318);
      for (iVar5 = 0x380; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined2 *)(iVar1 + 0xa91c) = 0;
      *(undefined2 *)(iVar1 + 0xa91e) = 8;
      *(undefined2 *)(iVar1 + 0xa920) = 0xffff;
      *(undefined1 *)(iVar1 + 0xac1c) = 1;
      if (param_1 == 1) {
        uVar7 = 0;
        do {
          piVar2 = *(int **)((int)this + uVar7 * 4 + 26000);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))();
          }
          *(undefined4 *)(iVar1 + 0xaae4 + uVar7 * 4) =
               *(undefined4 *)((int)this + uVar7 * 4 + 26000);
          *(undefined4 *)(iVar1 + 0xab64 + uVar7 * 4) =
               *(undefined4 *)((int)this + uVar7 * 4 + 0x65d0);
          *(undefined4 *)(iVar1 + 0xab24 + uVar7 * 4) =
               *(undefined4 *)((int)this + uVar7 * 4 + 0x6610);
          pbVar3 = (byte *)(iVar1 + 0xac18 + (uVar7 >> 5) * 4 + ((int)(uVar7 & 0x1f) >> 3));
          *pbVar3 = *pbVar3 | '\x01' << (uVar7 & 7);
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0x10);
        *(undefined4 *)(iVar1 + 0xaba4) = *(undefined4 *)((int)this + 0x6674);
        *(undefined1 *)(iVar1 + 0xac1f) = 1;
        if (*(int **)((int)this + 0x658c) != (int *)0x0) {
          (**(code **)(**(int **)((int)this + 0x658c) + 4))();
        }
        *(undefined4 *)(iVar1 + 0xaae0) = *(undefined4 *)((int)this + 0x658c);
        *(undefined1 *)(iVar1 + 0xac1e) = 1;
      }
    }
    *param_3 = iVar1;
  }
  return uVar4;
}

