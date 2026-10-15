/*
 * FUN_10027da5 at 10027da5
 * undefined1 __thiscall FUN_10027da5(void * this, undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, int param_5)
 * Address ranges: 10027da5-10027f31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_10027da5(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            int param_5)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 1;
  iVar4 = *(int *)(param_5 + 4);
  uVar6 = uVar5;
  if ((*(uint *)(iVar4 + 0x6c) & 0x200) != 0) {
    do {
      *(uint *)(iVar4 + 0x6c) =
           *(uint *)(&UNK_100645e8 + uVar6 * 4) & *(uint *)(param_5 + 0x14) |
           *(uint *)(iVar4 + 0x6c) & 0xfffe03ff;
      iVar4 = *(int *)((int)this + 0x124);
      *(int *)((int)this + 0x124) = iVar4 + 1;
      puVar3 = FUN_100226a2(param_1,param_2,(undefined4 *)0x0,*(undefined4 *)((int)this + 0x118),
                            (int)this,*(undefined4 *)(*(int *)(param_3 + 4) + 0x50),
                            (undefined2 *)(&DAT_1006c42c + *(int *)((int)this + 0x11c) * 0x228),
                            *(undefined4 **)(param_5 + 4),*(undefined4 *)(param_5 + 0x1c),0,uVar6,
                            iVar4,*(undefined1 *)(param_5 + 0x20),
                            *(byte *)(*(int *)(param_3 + 4) + 200) & 1);
      *(undefined4 **)(param_3 + 0x11c + uVar6 * 4) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
LAB_10027efb:
        do {
          piVar1 = *(int **)(param_3 + 0x130 + uVar5 * 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(undefined4 *)(param_3 + 0x130 + uVar5 * 4) = 0;
            *(undefined4 *)(param_3 + 0x11c + uVar5 * 4) = 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 6);
        return 0;
      }
      puVar3[0x43] = param_3;
      cVar2 = FUN_1002a193(*(void **)(param_3 + 0x11c + uVar6 * 4),param_4);
      if (cVar2 == '\0') {
LAB_10027ec8:
        puVar3 = *(undefined4 **)(param_3 + 0x11c + uVar6 * 4);
        if (puVar3 != (undefined4 *)0x0) {
          FUN_10029e6d(puVar3);
          FUN_10060be1(puVar3);
        }
        *(undefined4 *)(param_3 + 0x11c + uVar6 * 4) = 0;
        goto LAB_10027efb;
      }
      iVar4 = (**(code **)(**(int **)(param_3 + 0x11c + uVar6 * 4) + 0x34))
                        (param_4,param_3 + 0x130 + uVar6 * 4,0);
      if (iVar4 != 0) {
        FUN_1002a1c6(*(void **)(param_3 + 0x11c + uVar6 * 4));
        goto LAB_10027ec8;
      }
      iVar4 = *(int *)(param_5 + 4);
      if ((*(uint *)(iVar4 + 0x6c) & 0x200) != 0) {
        *(int *)((int)this + 0x124) = *(int *)((int)this + 0x124) + *(int *)(iVar4 + 0x18) + -1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 6);
  }
  return 1;
}

