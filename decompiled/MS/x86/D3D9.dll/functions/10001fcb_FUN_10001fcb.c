/*
 * FUN_10001fcb at 10001fcb
 * bool __thiscall FUN_10001fcb(void * this, int param_1)
 * Address ranges: 10001fcb-100020ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10001fcb(void *this,int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0x26 + (int)this) != '\0') goto LAB_100020a1;
  piVar1 = &DAT_100df2f4 + param_1 * 0x8a;
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  bVar8 = false;
  if ((&DAT_100df2f0)[param_1 * 0x8a] == 0) {
    iVar5 = (**(code **)(*(int *)(&DAT_100df2e8)[param_1 * 0x8a] + 0x1c))();
    if (iVar5 == 0) {
      uVar3 = (&DAT_100df2f8)[param_1 * 0x8a];
      pvVar6 = (void *)FUN_100cfd55(0x154);
      if (pvVar6 == (void *)0x0) {
LAB_10002066:
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = FUN_1002e3d6(pvVar6,uVar3);
      }
LAB_10002068:
      (&DAT_100df2f0)[param_1 * 0x8a] = puVar7;
    }
    else if (iVar5 == 1) {
      uVar2 = *(undefined1 *)(DAT_100dea74 + 0x95d);
      uVar3 = (&DAT_100df2f8)[param_1 * 0x8a];
      pvVar6 = (void *)FUN_100cfd55(0xf0);
      if (pvVar6 == (void *)0x0) goto LAB_10002066;
      puVar7 = FUN_10038b86(pvVar6,uVar3,uVar2);
      goto LAB_10002068;
    }
    if ((int *)(&DAT_100df2f0)[param_1 * 0x8a] != (int *)0x0) {
      cVar4 = (**(code **)(*(int *)(&DAT_100df2f0)[param_1 * 0x8a] + 4))();
      if (cVar4 == '\0') {
        if ((undefined4 *)(&DAT_100df2f0)[param_1 * 0x8a] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)(&DAT_100df2f0)[param_1 * 0x8a])(1);
        }
        (&DAT_100df2f0)[param_1 * 0x8a] = 0;
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
    }
    bVar8 = (&DAT_100df2f0)[param_1 * 0x8a] == 0;
  }
  if (!bVar8) {
    *(undefined1 *)(param_1 + 0x26 + (int)this) = 1;
  }
LAB_100020a1:
  return (&DAT_100df2f0)[param_1 * 0x8a] != 0;
}

