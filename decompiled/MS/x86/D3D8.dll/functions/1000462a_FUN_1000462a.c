/*
 * FUN_1000462a at 1000462a
 * uint __thiscall FUN_1000462a(void * this, int param_1, int * param_2, int * param_3)
 * Address ranges: 1000462a-100047b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000462a(void *this,int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  uVar4 = FUN_1001498b(this,param_1,param_2);
  if (-1 < (int)uVar4) {
    iVar1 = *(int *)(*(int *)((int)this + 0x210) + -4 + *param_2 * 4);
    *(undefined2 *)(iVar1 + 0x8a54) = 0xffff;
    *(undefined2 *)(iVar1 + 0x9258) = 0xffff;
    if ((param_1 == 3) || (param_1 == 1)) {
      puVar6 = (undefined4 *)((int)this + 0x1220);
      puVar8 = (undefined4 *)(iVar1 + 0x4a54);
      for (iVar5 = *(int *)((int)this + 0xb10) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined2 *)(iVar1 + 0x8a54) = 0;
      *(undefined2 *)(iVar1 + 0x8a56) = *(undefined2 *)((int)this + 0xb10);
      *(undefined2 *)(iVar1 + 0x8a58) = 0xffff;
      *(undefined1 *)(iVar1 + 0x93a1) = 1;
    }
    if ((param_1 == 2) || (param_1 == 1)) {
      puVar6 = (undefined4 *)((int)this + 0x5330);
      puVar8 = (undefined4 *)(iVar1 + 0x49d4);
      for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined2 *)(iVar1 + 0x9258) = 0;
      *(undefined2 *)(iVar1 + 0x925a) = 8;
      *(undefined2 *)(iVar1 + 0x925c) = 0xffff;
      *(undefined1 *)(iVar1 + 0x93a0) = 1;
      if (param_1 == 1) {
        uVar7 = 0;
        do {
          piVar2 = *(int **)((int)this + uVar7 * 4 + 0x57bc);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))();
          }
          *(undefined4 *)(iVar1 + 0x9270 + uVar7 * 4) =
               *(undefined4 *)((int)this + uVar7 * 4 + 0x57bc);
          *(undefined4 *)(iVar1 + 0x92f0 + uVar7 * 4) =
               *(undefined4 *)((int)this + uVar7 * 4 + 0x57fc);
          *(undefined4 *)(iVar1 + 0x92b0 + uVar7 * 4) =
               *(undefined4 *)((int)this + uVar7 * 4 + 0x583c);
          pbVar3 = (byte *)(iVar1 + 0x939c + (uVar7 >> 5) * 4 + ((int)(uVar7 & 0x1f) >> 3));
          *pbVar3 = *pbVar3 | '\x01' << (uVar7 & 7);
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0x10);
        *(undefined4 *)(iVar1 + 0x9330) = *(undefined4 *)((int)this + 0x58a0);
        *(undefined1 *)(iVar1 + 0x93a3) = 1;
        if (*(int **)((int)this + 0x57b8) != (int *)0x0) {
          (**(code **)(**(int **)((int)this + 0x57b8) + 4))();
        }
        *(undefined4 *)(iVar1 + 0x926c) = *(undefined4 *)((int)this + 0x57b8);
        *(undefined1 *)(iVar1 + 0x93a2) = 1;
      }
    }
    *param_3 = iVar1;
  }
  return uVar4;
}

