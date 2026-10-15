/*
 * FUN_1000213d at 1000213d
 * bool __thiscall FUN_1000213d(void * this, int param_1)
 * Address ranges: 1000213d-1000221f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1000213d(void *this,int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0x26 + (int)this) != '\0') goto LAB_10002213;
  piVar1 = &DAT_100ba72c + param_1 * 0x8a;
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  bVar8 = false;
  if ((&DAT_100ba728)[param_1 * 0x8a] == 0) {
    iVar5 = (**(code **)(*(int *)(&DAT_100ba720)[param_1 * 0x8a] + 0x1c))();
    if (iVar5 == 0) {
      uVar3 = (&DAT_100ba730)[param_1 * 0x8a];
      pvVar6 = (void *)FUN_100ad475(0x154);
      if (pvVar6 == (void *)0x0) {
LAB_100021d8:
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = FUN_10026add(pvVar6,uVar3);
      }
LAB_100021da:
      (&DAT_100ba728)[param_1 * 0x8a] = puVar7;
    }
    else if (iVar5 == 1) {
      uVar2 = *(undefined1 *)(DAT_100ba2b4 + 0x95d);
      uVar3 = (&DAT_100ba730)[param_1 * 0x8a];
      pvVar6 = (void *)FUN_100ad475(0xf0);
      if (pvVar6 == (void *)0x0) goto LAB_100021d8;
      puVar7 = FUN_1002eeaa(pvVar6,uVar3,uVar2);
      goto LAB_100021da;
    }
    if ((int *)(&DAT_100ba728)[param_1 * 0x8a] != (int *)0x0) {
      cVar4 = (**(code **)(*(int *)(&DAT_100ba728)[param_1 * 0x8a] + 4))();
      if (cVar4 == '\0') {
        if ((undefined4 *)(&DAT_100ba728)[param_1 * 0x8a] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)(&DAT_100ba728)[param_1 * 0x8a])(1);
        }
        (&DAT_100ba728)[param_1 * 0x8a] = 0;
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
    }
    bVar8 = (&DAT_100ba728)[param_1 * 0x8a] == 0;
  }
  if (!bVar8) {
    *(undefined1 *)(param_1 + 0x26 + (int)this) = 1;
  }
LAB_10002213:
  return (&DAT_100ba728)[param_1 * 0x8a] != 0;
}

